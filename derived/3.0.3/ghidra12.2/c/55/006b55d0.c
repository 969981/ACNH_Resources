
ulong FUN_006b55d0(long param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined8 param_5,uint param_6,long *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  plVar14 = (long *)*param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar7 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar7 = 0x8000000c00000006;
  *(undefined4 *)(puVar7 + 1) = 2;
  uVar2 = *param_3;
  uVar4 = param_3[1];
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  puVar13 = (undefined8 *)((long)puVar7 + 0x1fU & 0xfffffffffffffff0);
  *(uint *)((long)puVar7 + 0xc) = uVar2;
  *puVar13 = 0x149434653;
  puVar13[1] = (ulong)param_6;
  puVar13[2] = 0;
  puVar13[3] = param_5;
  *(undefined4 *)(puVar13 + 2) = param_4;
  uVar5 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar13 + 0xc) = uVar5;
  uVar6 = nn::sf::hipc::SendSyncRequest(uVar1,puVar7,0x100);
  if (uVar6 == 0) {
    local_88 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_006af700(&local_88,puVar7);
    piVar10 = (int *)(local_88 + (uStack_68 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
    if (*piVar10 == 0x4f434653) {
      uVar12 = *(ulong *)(piVar10 + 2);
      if ((int)uVar12 == 0) {
        puVar7 = (undefined8 *)(**(code **)(*(long *)*param_7 + 0x10))();
        puVar8 = (undefined1 *)(**(code **)*puVar7)();
        iVar3 = *(int *)(local_88 + (local_70 >> 0x20 & 0xff) * 4);
        if (iVar3 == 0) {
          *puVar8 = 0;
          plVar9 = (long *)*param_7;
          *param_7 = 0;
          if (plVar9 == (long *)0x0) {
            *param_7 = 0;
            plVar9 = (long *)*plVar14;
            *plVar14 = 0;
          }
          else {
            (**(code **)(*plVar9 + 8))();
            lVar11 = *param_7;
            *param_7 = 0;
            plVar9 = (long *)*plVar14;
            *plVar14 = lVar11;
          }
        }
        else {
          *puVar8 = 1;
          puVar8[1] = 0;
          *(int *)(puVar8 + 4) = iVar3;
          lVar11 = *param_7;
          *param_7 = 0;
          plVar9 = (long *)*plVar14;
          *plVar14 = lVar11;
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
  if ((char)uVar4 != '\0') {
    nn::os::CloseNativeHandle(uVar2);
  }
  return uVar12 & 0xffffffff;
}

