
/* WARNING: Removing unreachable block (ram,0x006b9970) */

ulong FUN_006b9828(long param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,long *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  ulong uVar13;
  int iVar14;
  long *plVar15;
  long local_78 [5];
  
  plVar11 = *(long **)(param_1 + 8);
  plVar15 = (long *)*param_2;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = (**(code **)*plVar11)(plVar11);
  puVar6 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar6 = 0x1000000006;
  puVar12 = (undefined4 *)((long)puVar6 + 0x17U & 0xfffffffffffffff0);
  *(undefined8 *)(puVar12 + 4) = 0x149434653;
  *(ulong *)(puVar12 + 6) = (ulong)param_4;
  *(undefined8 *)(puVar12 + 8) = 0;
  *(undefined8 *)(puVar12 + 10) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *puVar12 = 0x200001;
  puVar12[1] = uVar4;
  *(undefined8 *)(puVar12 + 2) = 0;
  *(undefined8 *)(puVar12 + 8) = uVar1;
  *(undefined8 *)(puVar12 + 10) = uVar2;
  uVar4 = nn::sf::cmif::GetInlineContext();
  puVar12[3] = uVar4;
  uVar5 = nn::sf::hipc::SendSyncRequest(uVar3,puVar6,0x100);
  if (uVar5 == 0) {
    local_78[0] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    FUN_006af700(local_78,puVar6);
    uVar9 = local_78[0] + ((ulong)local_78[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0;
    if (*(int *)(uVar9 + 0x10) != 0x4f434653) {
      uVar13 = 0x1a80a;
      (**(code **)(*plVar11 + 8))(plVar11,uVar3);
      goto LAB_006b99f8;
    }
    uVar13 = *(ulong *)(uVar9 + 0x18);
    if ((int)uVar13 != 0) {
      nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar13 & 0xffffffff);
      goto LAB_006b992c;
    }
    iVar14 = *(int *)(uVar9 + 0x20);
    (**(code **)(*plVar11 + 8))(plVar11,uVar3);
  }
  else {
    uVar13 = (ulong)uVar5;
LAB_006b992c:
    iVar14 = 0;
    (**(code **)(*plVar11 + 8))(plVar11,uVar3);
    if ((int)uVar13 != 0) goto LAB_006b99f8;
  }
  plVar7 = (long *)*param_5;
  if (iVar14 == 0) {
    *param_5 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))();
    puVar8 = (undefined1 *)(**(code **)*puVar6)();
    *(long **)(puVar8 + 8) = plVar11;
    *(int *)(puVar8 + 0x10) = iVar14;
    *puVar8 = 1;
  }
  lVar10 = *param_5;
  *param_5 = 0;
  plVar11 = (long *)*plVar15;
  *plVar15 = lVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
LAB_006b99f8:
  return uVar13 & 0xffffffff;
}

