
/* WARNING: Removing unreachable block (ram,0x03344b58) */
/* WARNING: Removing unreachable block (ram,0x03344af8) */
/* WARNING: Removing unreachable block (ram,0x03344b24) */
/* WARNING: Removing unreachable block (ram,0x03344b8c) */

void FUN_03344aac(ulong *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_74;
  undefined *local_70;
  undefined8 *puStack_68;
  
  puVar1 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "LayoutResourceManager Heap";
  local_70 = (undefined *)0x0;
  puStack_68 = (undefined8 *)0x0;
  if (*param_2 != 0) {
    local_70 = (undefined *)FUN_038c6d48(0,&local_88,*param_2,8,1,1);
    local_74 = 0;
  }
  *param_1 = (ulong)local_70;
  param_1[1] = (ulong)puStack_68;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar11 = malloc(0x6c0);
  }
  else {
    plVar9 = (long *)*param_1;
    if (plVar9 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar12 + 8);
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_03344e48;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x6c0,8);
  }
  if (puVar11 != (undefined8 *)0x0) {
    puVar1 = puVar1 + 0x10;
    *puVar11 = 5;
    puVar8 = PTR_DAT_04bb2120;
    puVar2 = PTR_DAT_04bc9430 + 0x10;
    puVar11[4] = puVar1;
    puVar11[5] = puVar8;
    puVar11[1] = puVar2;
    puVar3 = PTR_DAT_04bc95f0 + 0x10;
    puVar11[2] = 0;
    puVar11[3] = puVar3;
    puVar4 = PTR_DAT_04bc8e60;
    puVar11[6] = 0;
    puVar11[7] = 0x20;
    *(undefined1 *)((long)puVar11 + 0x72) = 0;
    puVar4 = puVar4 + 0x10;
    puVar11[8] = puVar4;
    puVar11[9] = 0;
    *(undefined2 *)(puVar11 + 0xe) = 0x101;
    puVar5 = PTR_DAT_04bc8e68 + 0x10;
    puStack_68 = &DAT_0407ebb1;
    local_70 = puVar5;
    FUN_032e24f4(puVar11 + 0xf,&local_70);
    puVar6 = PTR_DAT_04bc9600;
    puVar11[0x1e] = puVar4;
    puVar11[0x1f] = 0;
    puVar7 = PTR_DAT_04bc95f8;
    puVar11[0x24] = 0;
    puVar11[0x25] = puVar4;
    puVar6 = puVar6 + 0x10;
    puVar11[0x26] = 0;
    puVar7 = puVar7 + 0x10;
    puVar11[0x32] = 0x20;
    puVar11[0x33] = puVar4;
    puVar11[0xf] = puVar6;
    puVar11[3] = puVar7;
    *(undefined4 *)(puVar11 + 0x2b) = 0;
    puVar11[0x34] = 0;
    *(undefined2 *)(puVar11 + 0x39) = 0x101;
    *(undefined1 *)((long)puVar11 + 0x1ca) = 0;
    puVar11[0x2c] = puVar2;
    puVar11[0x2d] = 0;
    puVar11[0x2e] = puVar3;
    puVar11[0x2f] = puVar1;
    puVar11[0x30] = puVar8;
    puVar11[0x31] = 0;
    puStack_68 = &DAT_0407ebb1;
    local_70 = puVar5;
    FUN_032e24f4(puVar11 + 0x3a,&local_70);
    puVar11[0x3a] = puVar6;
    puVar11[0x5d] = 0x20;
    puVar11[0x49] = puVar4;
    puVar11[0x4a] = 0;
    puVar11[0x4f] = 0;
    puVar11[0x2e] = puVar7;
    puVar11[0x50] = puVar4;
    puVar11[0x51] = 0;
    *(undefined4 *)(puVar11 + 0x56) = 0;
    puVar11[0x57] = puVar2;
    puVar11[0x58] = 0;
    puVar11[0x59] = puVar3;
    puVar11[0x5a] = puVar1;
    puVar11[0x5b] = puVar8;
    puVar11[0x5c] = 0;
    puVar11[0x5e] = puVar4;
    puVar11[0x5f] = 0;
    *(undefined2 *)(puVar11 + 100) = 0x101;
    *(undefined1 *)((long)puVar11 + 0x322) = 0;
    puStack_68 = &DAT_0407ebb1;
    local_70 = puVar5;
    FUN_032e24f4(puVar11 + 0x65,&local_70);
    puVar11[0x65] = puVar6;
    puVar11[0x88] = 0x20;
    puVar11[0x74] = puVar4;
    puVar11[0x75] = 0;
    puVar11[0x7a] = 0;
    puVar11[0x59] = puVar7;
    puVar11[0x7b] = puVar4;
    puVar11[0x7c] = 0;
    *(undefined4 *)(puVar11 + 0x81) = 0;
    puVar11[0x82] = puVar2;
    puVar11[0x83] = 0;
    puVar11[0x84] = puVar3;
    puVar11[0x85] = puVar1;
    puVar11[0x86] = puVar8;
    puVar11[0x87] = 0;
    puVar11[0x89] = puVar4;
    puVar11[0x8a] = 0;
    *(undefined2 *)(puVar11 + 0x8f) = 0x101;
    *(undefined1 *)((long)puVar11 + 0x47a) = 0;
    puStack_68 = &DAT_0407ebb1;
    local_70 = puVar5;
    FUN_032e24f4(puVar11 + 0x90,&local_70);
    *(undefined2 *)(puVar11 + 0xba) = 0x101;
    puVar11[0xb3] = 0x20;
    puVar11[0x90] = puVar6;
    puVar11[0x9f] = puVar4;
    puVar11[0xa0] = 0;
    puVar11[0xa5] = 0;
    puVar11[0x84] = puVar7;
    puVar11[0xa6] = puVar4;
    puVar11[0xa7] = 0;
    *(undefined4 *)(puVar11 + 0xac) = 0;
    puVar11[0xad] = puVar2;
    puVar11[0xae] = 0;
    puVar11[0xaf] = puVar3;
    puVar11[0xb0] = puVar1;
    puVar11[0xb1] = puVar8;
    puVar11[0xb2] = 0;
    puVar11[0xb4] = puVar4;
    puVar11[0xb5] = 0;
    *(undefined1 *)((long)puVar11 + 0x5d2) = 0;
    puStack_68 = &DAT_0407ebb1;
    local_70 = puVar5;
    FUN_032e24f4(puVar11 + 0xbb,&local_70);
    puVar11[0xbb] = puVar6;
    puVar11[0xca] = puVar4;
    puVar11[0xcb] = 0;
    puVar11[0xd0] = 0;
    puVar11[0xaf] = puVar7;
    puVar11[0xd1] = puVar4;
    puVar11[0xd2] = 0;
    *(undefined4 *)(puVar11 + 0xd7) = 0;
    *(undefined4 *)(param_1 + 2) = 5;
    param_1[3] = (ulong)(puVar11 + 1);
  }
LAB_03344e48:
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x28))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x28))();
  }
  return;
}

