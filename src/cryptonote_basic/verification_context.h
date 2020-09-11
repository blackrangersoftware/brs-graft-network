// Copyright (c) 2019, The Loki Project
// Copyright (c) 2014-2019, The Monero Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// Parts of this file are originally copyright (c) 2012-2013 The Cryptonote developers

#pragma once

#include <serialization/keyvalue_serialization.h>

namespace cryptonote
{
  /************************************************************************/
  /*                                                                      */
  /************************************************************************/
  struct vote_verification_context
  {
<<<<<<< HEAD
    bool m_verification_failed = false;    // generic "failed" flag
    bool m_invalid_block_height = false;   
    bool m_duplicate_voters = false;
    bool m_voter_index_out_of_bounds = false;
    bool m_signature_not_valid = false;
    bool m_added_to_pool = false;
    bool m_not_enough_votes = false;
    bool m_incorrect_voting_group = false;
    bool m_invalid_vote_type = false;
    bool m_votes_not_sorted = false;
||||||| parent of a6cbad170... Enforce ordering of votes in HF13
    bool m_verification_failed;
    bool m_invalid_block_height;
    bool m_duplicate_voters;
    bool m_validator_index_out_of_bounds;
    bool m_worker_index_out_of_bounds;
    bool m_signature_not_valid;
    bool m_added_to_pool;
    bool m_not_enough_votes;
    bool m_incorrect_voting_group;
    bool m_invalid_vote_type;
=======
    bool m_verification_failed;
    bool m_invalid_block_height;
    bool m_duplicate_voters;
    bool m_validator_index_out_of_bounds;
    bool m_worker_index_out_of_bounds;
    bool m_signature_not_valid;
    bool m_added_to_pool;
    bool m_not_enough_votes;
    bool m_incorrect_voting_group;
    bool m_invalid_vote_type;
    bool m_votes_not_sorted;
>>>>>>> a6cbad170... Enforce ordering of votes in HF13

    BEGIN_KV_SERIALIZE_MAP()
      KV_SERIALIZE(m_verification_failed)
      KV_SERIALIZE(m_invalid_block_height)
      KV_SERIALIZE(m_duplicate_voters)
      KV_SERIALIZE(m_voter_index_out_of_bounds)
      KV_SERIALIZE(m_signature_not_valid)
      KV_SERIALIZE(m_added_to_pool)
      KV_SERIALIZE(m_not_enough_votes)
      KV_SERIALIZE(m_incorrect_voting_group)
      KV_SERIALIZE(m_invalid_vote_type)
      KV_SERIALIZE(m_votes_not_sorted)
      KV_SERIALIZE(m_incorrect_voting_group)
    END_KV_SERIALIZE_MAP()
  };

  struct tx_verification_context
  {
    bool m_should_be_relayed;
    bool m_verifivation_failed; //bad tx, should drop connection
    bool m_verifivation_impossible; //the transaction is related with an alternative blockchain
    bool m_added_to_pool; 
    bool m_low_mixin;
    bool m_double_spend;
    bool m_invalid_input;
    bool m_invalid_output;
    bool m_too_big;
    bool m_overspend;
    bool m_fee_too_low;
    bool m_not_rct;
    bool m_rta_signature_failed;
  };

  struct block_verification_context
  {
    bool m_added_to_main_chain;
    bool m_verifivation_failed; //bad block, should drop connection
    bool m_marked_as_orphaned;
    bool m_already_exists;
    bool m_partial_block_reward;
  };
}
