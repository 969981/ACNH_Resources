
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b28d8(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined4 local_34;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar4 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar2 = DAT_0414a734;
  local_80 = CONCAT44(local_80._4_4_,0xf0000);
  local_98 = DAT_0414a734;
  local_60 = &local_98;
  local_90 = 10;
  uStack_88 = DAT_0414a744;
  *puVar4 = 0x1000006;
  puVar4[1] = 10;
  local_98._1_1_ = (char)((ulong)uVar2 >> 8);
  if (local_98._1_1_ != '\0') {
    puVar4[2] = 0;
  }
  local_34 = 6;
  local_98 = uVar2;
  local_70 = param_3;
  uStack_68 = param_4;
  local_58 = puVar4;
  uVar5 = FUN_006afb60(&local_60,1,&local_70,&local_34,0,0x28);
  if ((int)uVar5 == 0) {
    puVar7 = (undefined8 *)
             ((long)local_58 + (ulong)*(byte *)((long)local_60 + 0x17) * 4 + 0xf &
             0xfffffffffffffff0);
    *puVar7 = 0x149434653;
    puVar7[1] = (ulong)param_6;
    puVar7[2] = param_5;
    uVar3 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
    uVar5 = nn::sf::hipc::SendSyncRequest(uVar1,puVar4,0x100);
    if ((int)uVar5 == 0) {
      local_98 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_006af700(&local_98,puVar4);
      piVar6 = (int *)(local_98 + (uStack_78 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar6 == 0x4f434653) {
        uVar5 = *(ulong *)(piVar6 + 2);
        if ((int)uVar5 == 0) {
          *param_2 = piVar6[4];
        }
        else {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar5 & 0xffffffff);
        }
      }
      else {
        uVar5 = 0x1a80a;
      }
      goto LAB_006b2a48;
    }
  }
  uVar5 = uVar5 & 0xffffffff;
LAB_006b2a48:
  return uVar5 & 0xffffffff;
}

