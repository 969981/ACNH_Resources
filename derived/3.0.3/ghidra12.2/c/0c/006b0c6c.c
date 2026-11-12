
/* WARNING: Removing unreachable block (ram,0x006b0d28) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b0c6c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long local_90 [3];
  undefined8 local_78;
  ulong uStack_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined4 *local_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_50 = (undefined1 *)((ulong)local_50 & 0xffffffffffff0000);
    iVar3 = nn::sf::hipc::client::QueryPointerBufferSize(&local_50,*(undefined4 *)(param_1 + 4));
    local_90[0] = CONCAT44(local_90[0]._4_4_,iVar3);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)local_90);
    }
    *(undefined2 *)(param_1 + 2) = local_50._0_2_;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar1 = *(undefined2 *)(param_1 + 2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar5 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  local_90[0] = 1;
  local_78 = CONCAT44(local_78._4_4_,0xd000b);
  local_90[1] = 0xc09;
  local_90[2] = 0x200000000000000;
  *puVar5 = 6;
  puVar5[1] = 0xc09;
  local_64 = 10;
  local_60 = param_2;
  uStack_58 = param_3;
  local_50 = (undefined1 *)local_90;
  local_48 = puVar5;
  uVar6 = FUN_006afb60(&local_50,1,&local_60,&local_64,uVar1,0x20);
  if ((int)uVar6 == 0) {
    puVar8 = (undefined8 *)
             ((long)local_48 + (ulong)(byte)local_50[0x17] * 4 + 0xf & 0xfffffffffffffff0);
    *puVar8 = 0x149434653;
    puVar8[1] = param_4 & 0xffffffff;
    uVar4 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar8 + 0xc) = uVar4;
    uVar6 = nn::sf::hipc::SendSyncRequest(uVar2,puVar5,0x100);
    if ((int)uVar6 == 0) {
      local_90[0] = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_90[1] = 0;
      local_90[2] = 0;
      FUN_006af700(local_90,puVar5);
      piVar7 = (int *)(local_90[0] + (uStack_70 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar7 == 0x4f434653) {
        uVar6 = *(ulong *)(piVar7 + 2);
        if ((int)uVar6 != 0) {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar6 & 0xffffffff);
        }
      }
      else {
        uVar6 = 0x1a80a;
      }
      goto LAB_006b0e00;
    }
  }
  uVar6 = uVar6 & 0xffffffff;
LAB_006b0e00:
  return uVar6 & 0xffffffff;
}

