
/* WARNING: Removing unreachable block (ram,0x006b4cf4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b4c2c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  ulong *local_80;
  undefined4 *local_78;
  ulong local_70 [3];
  undefined4 local_58;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_70[0] = local_70[0] & 0xffffffffffff0000;
    iVar3 = nn::sf::hipc::client::QueryPointerBufferSize(local_70,*(undefined4 *)(param_1 + 4));
    local_b0 = CONCAT44(local_b0._4_4_,iVar3);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_b0);
    }
    *(undefined2 *)(param_1 + 2) = (undefined2)local_70[0];
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar1 = *(undefined2 *)(param_1 + 2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar5 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  local_70[0] = 1;
  local_80 = local_70;
  local_58 = 0xf000b;
  local_70[1] = 0x1009;
  local_70[2] = 0x200000000000000;
  *puVar5 = 6;
  puVar5[1] = 0x1009;
  local_88 = 0xa0000000a;
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  local_98 = param_5;
  local_78 = puVar5;
  uVar6 = FUN_006afb60(&local_80,2,&local_b0,&local_88,uVar1,0x20);
  if ((int)uVar6 == 0) {
    puVar8 = (undefined8 *)
             ((long)local_78 + (ulong)*(byte *)((long)local_80 + 0x17) * 4 + 0xf &
             0xfffffffffffffff0);
    *puVar8 = 0x149434653;
    puVar8[1] = param_6 & 0xffffffff;
    uVar4 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar8 + 0xc) = uVar4;
    uVar6 = nn::sf::hipc::SendSyncRequest(uVar2,puVar5,0x100);
    if ((int)uVar6 == 0) {
      local_b0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_006af700(&local_b0,puVar5);
      piVar7 = (int *)(local_b0 + (uStack_90 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar7 == 0x4f434653) {
        uVar6 = *(ulong *)(piVar7 + 2);
        if ((int)uVar6 != 0) {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar6 & 0xffffffff);
        }
      }
      else {
        uVar6 = 0x1a80a;
      }
      goto LAB_006b4dd4;
    }
  }
  uVar6 = uVar6 & 0xffffffff;
LAB_006b4dd4:
  return uVar6 & 0xffffffff;
}

