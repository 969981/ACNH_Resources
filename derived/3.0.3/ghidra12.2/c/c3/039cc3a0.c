
void FUN_039cc3a0(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined *local_ca8;
  byte *local_ca0;
  long local_c98;
  undefined8 local_c90;
  long local_880;
  undefined8 local_878;
  undefined *local_468;
  undefined1 *local_460;
  undefined4 local_458;
  undefined1 local_454 [1023];
  undefined1 local_55;
  
  plVar2 = *(long **)(*(long *)PTR_DAT_04bb4e50 + 0x58);
  if (plVar2 == (long *)0x0 || *(int *)(param_1 + 0x234) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1b0) == 0) {
    if (*(long *)(param_1 + 0x160) == param_1 + 0x158) {
      return;
    }
    lVar7 = (long)*(int *)(param_1 + 0x16c);
    lVar6 = *(long *)(param_1 + 0x160) - lVar7;
    while (lVar6 == param_2) {
      lVar6 = *(long *)(lVar6 + lVar7 + 8) - lVar7;
      if (lVar6 == (param_1 + 0x158) - lVar7) {
        return;
      }
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      puVar3 = malloc(0x10);
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x10,8);
    }
    puVar1 = PTR_DAT_04bb2020;
    local_ca0 = *(byte **)(PTR_PTR_04bb2238 + 8);
    local_ca8 = PTR_DAT_04bb2020 + 0x10;
    *puVar3 = &PTR_LAB_04b6ae48;
    piVar10 = (int *)(puVar3 + 1);
    *piVar10 = 0;
    (**(code **)(puVar1 + 0x28))(&local_ca8);
    uVar9 = (uint)*local_ca0;
    if (*local_ca0 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      pbVar8 = local_ca0;
      do {
        pbVar8 = pbVar8 + 1;
        uVar5 = (uint)*(ushort *)(PTR_DAT_04bd0f10 + (ulong)(uVar9 ^ uVar5 & 0xff) * 2) ^ uVar5 >> 8
        ;
        uVar9 = (uint)*pbVar8;
      } while (uVar9 != 0);
    }
    *(short *)((long)puVar3 + 0xc) = (short)uVar5;
    FUN_006e9454(&local_c98,"%s_%s","model","folder");
    local_55 = 0;
    local_460 = local_454;
    local_458 = 0x400;
    local_454[0] = 0;
    local_468 = PTR_DAT_04bb2f40 + 0x10;
    (**(code **)(local_c98 + 0x18))(&local_c98);
    FUN_006e9454(&local_880,"%s\\%s","model",local_c90);
    (**(code **)(local_880 + 0x18))(&local_880);
    FUN_038d1270(&local_468,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_878);
    if (*(int *)(param_1 + 0x1b0) < *(int *)(param_1 + 0x1b4)) {
      *(undefined8 **)(*(long *)(param_1 + 0x1b8) + (long)*(int *)(param_1 + 0x1b0) * 8) = puVar3;
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
    }
    if (*(long *)(lVar6 + 0xa0) != 0) {
      *(undefined2 *)(*(long *)(lVar6 + 0xa0) + 0x38) = *(undefined2 *)((long)puVar3 + 0xc);
    }
    iVar4 = *piVar10 + 1;
    *piVar10 = iVar4;
    if (*(long *)(param_2 + 0xa0) == 0) goto LAB_039cc40c;
    *(undefined2 *)(*(long *)(param_2 + 0xa0) + 0x38) = *(undefined2 *)((long)puVar3 + 0xc);
  }
  else {
    lVar6 = **(long **)(param_1 + 0x1b8);
    if (*(long *)(param_2 + 0xa0) != 0) {
      *(undefined2 *)(*(long *)(param_2 + 0xa0) + 0x38) = *(undefined2 *)(lVar6 + 0xc);
    }
    piVar10 = (int *)(lVar6 + 8);
  }
  iVar4 = *piVar10;
LAB_039cc40c:
  *piVar10 = iVar4 + 1;
  return;
}

