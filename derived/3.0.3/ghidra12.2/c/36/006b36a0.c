
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b36a0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,long *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  ulong uStack_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined4 *local_58;
  
  plVar12 = (long *)*param_2;
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar5 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar1 = DAT_0414af10;
  local_88 = CONCAT44(local_88._4_4_,0x110000);
  local_a0 = DAT_0414af10;
  local_98 = 0xc;
  uStack_90 = DAT_0414af20;
  *puVar5 = 0x100006;
  puVar5[1] = 0xc;
  local_a0._1_1_ = (char)((ulong)uVar1 >> 8);
  if (local_a0._1_1_ != '\0') {
    puVar5[2] = 0;
  }
  local_74 = 5;
  local_a0 = uVar1;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = (undefined1 *)&local_a0;
  local_58 = puVar5;
  uVar6 = FUN_006afb60(&local_60,1,&local_70,&local_74,0,0x30);
  if ((int)uVar6 == 0) {
    puVar11 = (undefined8 *)
              ((long)local_58 + (ulong)(byte)local_60[0x17] * 4 + 0xf & 0xfffffffffffffff0);
    *puVar11 = 0x149434653;
    puVar11[1] = (ulong)param_6;
    puVar11[2] = 0;
    puVar11[3] = 0;
    uVar1 = param_3[1];
    puVar11[2] = *param_3;
    puVar11[3] = uVar1;
    uVar4 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar11 + 0xc) = uVar4;
    uVar6 = nn::sf::hipc::SendSyncRequest(uVar2,puVar5,0x100);
    if ((int)uVar6 == 0) {
      local_a0 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      FUN_006af700(&local_a0,puVar5);
      piVar9 = (int *)(local_a0 + (uStack_80 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar9 == 0x4f434653) {
        uVar6 = *(ulong *)(piVar9 + 2);
        if ((int)uVar6 == 0) {
          puVar11 = (undefined8 *)(**(code **)(*(long *)*param_7 + 0x10))();
          puVar7 = (undefined1 *)(**(code **)*puVar11)();
          iVar3 = *(int *)(local_a0 + (local_88 >> 0x20 & 0xff) * 4);
          if (iVar3 == 0) {
            *puVar7 = 0;
            plVar8 = (long *)*param_7;
            *param_7 = 0;
            if (plVar8 == (long *)0x0) {
              *param_7 = 0;
              plVar8 = (long *)*plVar12;
              *plVar12 = 0;
            }
            else {
              (**(code **)(*plVar8 + 8))();
              lVar10 = *param_7;
              *param_7 = 0;
              plVar8 = (long *)*plVar12;
              *plVar12 = lVar10;
            }
          }
          else {
            *puVar7 = 1;
            puVar7[1] = 0;
            *(int *)(puVar7 + 4) = iVar3;
            lVar10 = *param_7;
            *param_7 = 0;
            plVar8 = (long *)*plVar12;
            *plVar12 = lVar10;
          }
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 8))();
          }
          uVar6 = 0;
        }
        else {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar6 & 0xffffffff);
        }
      }
      else {
        uVar6 = 0x1a80a;
      }
      goto LAB_006b3878;
    }
  }
  uVar6 = uVar6 & 0xffffffff;
LAB_006b3878:
  return uVar6 & 0xffffffff;
}

