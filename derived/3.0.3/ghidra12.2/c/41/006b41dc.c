
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b41dc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,long *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined4 local_34;
  
  plVar12 = (long *)*param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar5 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar3 = DAT_0414b67c;
  local_80 = CONCAT44(local_80._4_4_,0xd0000);
  local_98 = DAT_0414b67c;
  local_60 = &local_98;
  local_90 = 8;
  uStack_88 = DAT_0414b68c;
  *puVar5 = 0x100006;
  puVar5[1] = 8;
  local_98._1_1_ = (char)((ulong)uVar3 >> 8);
  if (local_98._1_1_ != '\0') {
    puVar5[2] = 0;
  }
  local_34 = 0x15;
  local_98 = uVar3;
  local_70 = param_3;
  uStack_68 = param_4;
  local_58 = puVar5;
  uVar6 = FUN_006afb60(&local_60,1,&local_70,&local_34,0,0x20);
  if ((int)uVar6 == 0) {
    puVar11 = (undefined8 *)
              ((long)local_58 + (ulong)*(byte *)((long)local_60 + 0x17) * 4 + 0xf &
              0xfffffffffffffff0);
    *puVar11 = 0x149434653;
    puVar11[1] = (ulong)param_5;
    uVar4 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar11 + 0xc) = uVar4;
    uVar6 = nn::sf::hipc::SendSyncRequest(uVar1,puVar5,0x100);
    if ((int)uVar6 == 0) {
      local_98 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_006af700(&local_98,puVar5);
      piVar9 = (int *)(local_98 + (uStack_78 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar9 == 0x4f434653) {
        uVar6 = *(ulong *)(piVar9 + 2);
        if ((int)uVar6 == 0) {
          puVar11 = (undefined8 *)(**(code **)(*(long *)*param_6 + 0x10))();
          puVar7 = (undefined1 *)(**(code **)*puVar11)();
          iVar2 = *(int *)(local_98 + (local_80 >> 0x20 & 0xff) * 4);
          if (iVar2 == 0) {
            *puVar7 = 0;
            plVar8 = (long *)*param_6;
            *param_6 = 0;
            if (plVar8 == (long *)0x0) {
              *param_6 = 0;
              plVar8 = (long *)*plVar12;
              *plVar12 = 0;
            }
            else {
              (**(code **)(*plVar8 + 8))();
              lVar10 = *param_6;
              *param_6 = 0;
              plVar8 = (long *)*plVar12;
              *plVar12 = lVar10;
            }
          }
          else {
            *puVar7 = 1;
            puVar7[1] = 0;
            *(int *)(puVar7 + 4) = iVar2;
            lVar10 = *param_6;
            *param_6 = 0;
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
      goto LAB_006b43a4;
    }
  }
  uVar6 = uVar6 & 0xffffffff;
LAB_006b43a4:
  return uVar6 & 0xffffffff;
}

