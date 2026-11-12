
ulong FUN_006b0e2c(long param_1,undefined8 *param_2,uint param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  ulong uStack_48;
  
  plVar11 = (long *)*param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar5 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar5 = 0x800000006;
  puVar12 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff0);
  *puVar12 = 0x149434653;
  puVar12[1] = (ulong)param_3;
  uVar3 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar12 + 0xc) = uVar3;
  uVar4 = nn::sf::hipc::SendSyncRequest(uVar1,puVar5,0x100);
  if (uVar4 == 0) {
    local_68 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_006af700(&local_68,puVar5);
    piVar8 = (int *)(local_68 + (uStack_48 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
    if (*piVar8 == 0x4f434653) {
      uVar10 = *(ulong *)(piVar8 + 2);
      if ((int)uVar10 == 0) {
        puVar5 = (undefined8 *)(**(code **)(*(long *)*param_4 + 0x10))();
        puVar6 = (undefined1 *)(**(code **)*puVar5)();
        iVar2 = *(int *)(local_68 + (local_50 >> 0x20 & 0xff) * 4);
        if (iVar2 == 0) {
          *puVar6 = 0;
          plVar7 = (long *)*param_4;
          *param_4 = 0;
          if (plVar7 == (long *)0x0) {
            *param_4 = 0;
            plVar7 = (long *)*plVar11;
            *plVar11 = 0;
          }
          else {
            (**(code **)(*plVar7 + 8))();
            lVar9 = *param_4;
            *param_4 = 0;
            plVar7 = (long *)*plVar11;
            *plVar11 = lVar9;
          }
        }
        else {
          *puVar6 = 1;
          puVar6[1] = 0;
          *(int *)(puVar6 + 4) = iVar2;
          lVar9 = *param_4;
          *param_4 = 0;
          plVar7 = (long *)*plVar11;
          *plVar11 = lVar9;
        }
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        uVar10 = 0;
      }
      else {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar10 & 0xffffffff);
      }
    }
    else {
      uVar10 = 0x1a80a;
    }
  }
  else {
    uVar10 = (ulong)uVar4;
  }
  return uVar10 & 0xffffffff;
}

