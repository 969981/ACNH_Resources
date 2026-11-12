
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006ba51c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined4 *local_68;
  undefined4 local_44;
  
  plVar10 = *(long **)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = (**(code **)*plVar10)(plVar10);
  lVar3 = plVar10[1];
  puVar8 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  lVar4 = DAT_0414c88c;
  local_90 = CONCAT44(local_90._4_4_,0x150000);
  local_a8 = DAT_0414c88c;
  local_70 = &local_a8;
  local_a0 = 0x10;
  uStack_98 = DAT_0414c89c;
  *puVar8 = 0x1000006;
  puVar8[1] = 0x10;
  local_a8._1_1_ = (char)((ulong)lVar4 >> 8);
  if (local_a8._1_1_ != '\0') {
    puVar8[2] = 0;
  }
  local_44 = 0x16;
  local_a8 = lVar4;
  local_80 = param_2;
  uStack_78 = param_3;
  local_68 = puVar8;
  uVar6 = FUN_006afb60(&local_70,1,&local_80,&local_44,(short)lVar3,0x40);
  if (uVar6 == 0) {
    puVar11 = (undefined4 *)
              ((long)local_68 + (ulong)*(byte *)((long)local_70 + 0x17) * 4 + 0xf &
              0xfffffffffffffff0);
    *(undefined8 *)(puVar11 + 4) = 0x149434653;
    *(ulong *)(puVar11 + 6) = param_5 & 0xffffffff;
    *(undefined8 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 10) = 0;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    *puVar11 = 0x200001;
    puVar11[1] = uVar7;
    *(undefined8 *)(puVar11 + 2) = 0;
    *(undefined8 *)(puVar11 + 8) = uVar1;
    *(undefined8 *)(puVar11 + 10) = uVar2;
    uVar7 = nn::sf::cmif::GetInlineContext();
    puVar11[3] = uVar7;
    uVar6 = nn::sf::hipc::SendSyncRequest(uVar5,puVar8,0x100);
    if (uVar6 == 0) {
      local_a8 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      FUN_006af700(&local_a8,puVar8);
      uVar9 = local_a8 + (uStack_88 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0;
      if (*(int *)(uVar9 + 0x10) == 0x4f434653) {
        uVar9 = *(ulong *)(uVar9 + 0x18);
        if ((int)uVar9 != 0) {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar9 & 0xffffffff);
        }
      }
      else {
        uVar9 = 0x1a80a;
      }
    }
    else {
      uVar9 = (ulong)uVar6;
    }
  }
  else {
    uVar9 = (ulong)uVar6;
  }
  (**(code **)(*plVar10 + 8))(plVar10,uVar5);
  return uVar9 & 0xffffffff;
}

