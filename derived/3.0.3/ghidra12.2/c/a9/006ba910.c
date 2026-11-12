
int FUN_006ba910(long param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4,
                undefined4 param_5,uint param_6,long *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined4 *puVar15;
  int iVar16;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  plVar11 = (long *)*param_2;
  plVar14 = *(long **)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = (**(code **)*plVar14)(plVar14);
  puVar8 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar8 = 0x8000001200000006;
  *(undefined4 *)(puVar8 + 1) = 2;
  uVar3 = *param_4;
  puVar15 = (undefined4 *)((long)puVar8 + 0x1fU & 0xfffffffffffffff0);
  *param_4 = 0;
  uVar4 = param_4[1];
  *(undefined1 *)(param_4 + 1) = 0;
  *(uint *)((long)puVar8 + 0xc) = uVar3;
  *(undefined8 *)(puVar15 + 4) = 0x149434653;
  *(ulong *)(puVar15 + 6) = (ulong)param_6;
  *(undefined8 *)(puVar15 + 0xc) = 0;
  *(undefined8 *)(puVar15 + 8) = 0;
  *(undefined8 *)(puVar15 + 10) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  puVar15[8] = param_5;
  *(undefined8 *)(puVar15 + 2) = 0;
  *(undefined8 *)(puVar15 + 10) = uVar1;
  *(undefined8 *)(puVar15 + 0xc) = uVar2;
  *puVar15 = 0x280001;
  puVar15[1] = uVar6;
  uVar6 = nn::sf::cmif::GetInlineContext();
  puVar15[3] = uVar6;
  iVar7 = nn::sf::hipc::SendSyncRequest(uVar5,puVar8,0x100);
  if (iVar7 == 0) {
    local_88 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_006af700(&local_88,puVar8);
    uVar12 = local_88 + (uStack_68 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0;
    if (*(int *)(uVar12 + 0x10) != 0x4f434653) {
      iVar16 = 0;
      iVar7 = 0x1a80a;
      goto joined_r0x006baa60;
    }
    iVar7 = (int)*(ulong *)(uVar12 + 0x18);
    if (iVar7 == 0) {
      iVar16 = *(int *)(uVar12 + 0x20);
      goto joined_r0x006baa60;
    }
    nn::sf::hipc::detail::HandleHipcErrorOnClient(*(ulong *)(uVar12 + 0x18) & 0xffffffff);
  }
  iVar16 = 0;
joined_r0x006baa60:
  if ((char)uVar4 != '\0') {
    nn::os::CloseNativeHandle(uVar3);
  }
  (**(code **)(*plVar14 + 8))(plVar14,uVar5);
  if (iVar7 == 0) {
    plVar9 = (long *)*param_7;
    if (iVar16 == 0) {
      *param_7 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x10))();
      puVar10 = (undefined1 *)(**(code **)*puVar8)();
      *(long **)(puVar10 + 8) = plVar14;
      *puVar10 = 1;
      *(int *)(puVar10 + 0x10) = iVar16;
    }
    lVar13 = *param_7;
    *param_7 = 0;
    plVar14 = (long *)*plVar11;
    *plVar11 = lVar13;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
  }
  return iVar7;
}

