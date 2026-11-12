
ulong FUN_006b5a78(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  uint param_5,long *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong uStack_58;
  
  plVar13 = (long *)*param_2;
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar7 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar7 = 0xe00000006;
  puVar14 = (undefined8 *)((long)puVar7 + 0x17U & 0xfffffffffffffff0);
  puVar14[3] = 0;
  puVar14[4] = 0;
  *puVar14 = 0x149434653;
  puVar14[1] = (ulong)param_5;
  puVar14[2] = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  puVar14[4] = param_4;
  puVar14[2] = uVar1;
  puVar14[3] = uVar2;
  uVar5 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar14 + 0xc) = uVar5;
  uVar6 = nn::sf::hipc::SendSyncRequest(uVar3,puVar7,0x100);
  if (uVar6 == 0) {
    local_78 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_006af700(&local_78,puVar7);
    piVar10 = (int *)(local_78 + (uStack_58 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
    if (*piVar10 == 0x4f434653) {
      uVar12 = *(ulong *)(piVar10 + 2);
      if ((int)uVar12 == 0) {
        puVar7 = (undefined8 *)(**(code **)(*(long *)*param_6 + 0x10))();
        puVar8 = (undefined1 *)(**(code **)*puVar7)();
        iVar4 = *(int *)(local_78 + (local_60 >> 0x20 & 0xff) * 4);
        if (iVar4 == 0) {
          *puVar8 = 0;
          plVar9 = (long *)*param_6;
          *param_6 = 0;
          if (plVar9 == (long *)0x0) {
            *param_6 = 0;
            plVar9 = (long *)*plVar13;
            *plVar13 = 0;
          }
          else {
            (**(code **)(*plVar9 + 8))();
            lVar11 = *param_6;
            *param_6 = 0;
            plVar9 = (long *)*plVar13;
            *plVar13 = lVar11;
          }
        }
        else {
          *puVar8 = 1;
          puVar8[1] = 0;
          *(int *)(puVar8 + 4) = iVar4;
          lVar11 = *param_6;
          *param_6 = 0;
          plVar9 = (long *)*plVar13;
          *plVar13 = lVar11;
        }
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        uVar12 = 0;
      }
      else {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar12 & 0xffffffff);
      }
    }
    else {
      uVar12 = 0x1a80a;
    }
  }
  else {
    uVar12 = (ulong)uVar6;
  }
  return uVar12 & 0xffffffff;
}

