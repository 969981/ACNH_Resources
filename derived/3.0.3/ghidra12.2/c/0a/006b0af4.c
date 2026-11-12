
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b0af4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined4 *local_48;
  undefined4 local_24;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar4 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar2 = DAT_04149bb0;
  local_70 = CONCAT44(local_70._4_4_,0xd0000);
  local_88 = DAT_04149bb0;
  local_50 = &local_88;
  local_80 = 8;
  uStack_78 = DAT_04149bc0;
  *puVar4 = 0x1000006;
  puVar4[1] = 8;
  local_88._1_1_ = (char)((ulong)uVar2 >> 8);
  if (local_88._1_1_ != '\0') {
    puVar4[2] = 0;
  }
  local_24 = 6;
  local_88 = uVar2;
  local_60 = param_2;
  uStack_58 = param_3;
  local_48 = puVar4;
  uVar5 = FUN_006afb60(&local_50,1,&local_60,&local_24,0,0x20);
  if ((int)uVar5 == 0) {
    puVar7 = (undefined8 *)
             ((long)local_48 + (ulong)*(byte *)((long)local_50 + 0x17) * 4 + 0xf &
             0xfffffffffffffff0);
    *puVar7 = 0x149434653;
    puVar7[1] = (ulong)param_4;
    uVar3 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
    uVar5 = nn::sf::hipc::SendSyncRequest(uVar1,puVar4,0x100);
    if ((int)uVar5 == 0) {
      local_88 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_006af700(&local_88,puVar4);
      piVar6 = (int *)(local_88 + (uStack_68 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar6 == 0x4f434653) {
        uVar5 = *(ulong *)(piVar6 + 2);
        if ((int)uVar5 != 0) {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar5 & 0xffffffff);
        }
      }
      else {
        uVar5 = 0x1a80a;
      }
      goto LAB_006b0c48;
    }
  }
  uVar5 = uVar5 & 0xffffffff;
LAB_006b0c48:
  return uVar5 & 0xffffffff;
}

