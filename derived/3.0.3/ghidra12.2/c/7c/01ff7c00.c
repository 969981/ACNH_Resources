
void FUN_01ff7c00(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  undefined4 *puVar9;
  char *__src;
  int iVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  *(int *)(param_1 + 0xaf90) = param_2;
  puVar5 = PTR_DAT_04bb39d8;
  if (param_2 != 1) {
    if (param_2 != 0) {
      return;
    }
    iVar10 = *(int *)(param_1 + 0xaf9c);
    if (iVar10 < 0) {
      puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar8 ^ *puVar8 << 0xb;
      uVar2 = puVar8[3];
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar8[2] = uVar2;
      puVar8[3] = uVar1;
      iVar10 = (int)((float)DAT_053ba4cc +
                    ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * (float)(DAT_053ba4d0 - DAT_053ba4cc)
                    );
    }
    *(int *)(param_1 + 0xaf9c) = iVar10;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
    uVar2 = puVar8[3];
    local_38 = (ulong)(uint)local_38;
    uVar1 = *puVar8 ^ *puVar8 << 0xb;
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    local_40 = 0;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar8[2] = uVar2;
    puVar8[3] = uVar1;
    *(int *)(param_1 + 0xaf98) =
         (int)((float)DAT_053ba4c4 +
              ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * (float)(DAT_053ba4c8 - DAT_053ba4c4));
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_40,
                 (long)&local_38 + 4,PTR_DAT_04bc1600,10);
    return;
  }
  lVar14 = *(long *)(param_1 + 8);
  (**(code **)(*(long *)(lVar14 + 0x3e0) + 0x18))(lVar14 + 0x3e0);
  (**(code **)(*(long *)(lVar14 + 0x3e0) + 0x18))(lVar14 + 0x3e0);
  if (*(undefined1 **)(lVar14 + 1000) == &DAT_040ee9d7) {
LAB_01ff7dc0:
    puVar9 = (undefined4 *)FUN_01e57b44(*(undefined8 *)(param_1 + 0x10));
    local_3c = puVar9[1];
    local_40 = *puVar9;
    uVar12 = FUN_0277d7b4(&local_40,param_1 + 0xaf88);
    lVar14 = *(long *)(param_1 + 0x10);
    if ((uVar12 & 1) == 0) {
      local_38 = 0;
      FUN_01e5a930(0x40000000,lVar14,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                   PTR_DAT_04bc1600,6);
      pcVar13 = *(char **)(lVar14 + 0x3b8);
      if (pcVar13 == "NpcSpCheersDemoEat") goto LAB_01ff7f58;
      iVar3 = *(int *)(lVar14 + 0x3c0);
      __src = "NpcSpCheersDemoEat";
      bVar7 = SBORROW4(iVar3,0x12);
      iVar10 = iVar3 + -0x12;
      bVar6 = iVar3 == 0x12;
      iVar11 = 0x12;
    }
    else {
      local_38 = 0;
      FUN_01e5a930(0x40000000,lVar14,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                   PTR_DAT_04bc1600,6);
      pcVar13 = *(char **)(lVar14 + 0x3b8);
      if (pcVar13 == "NpcSpCheersDemoDrink") goto LAB_01ff7f58;
      iVar3 = *(int *)(lVar14 + 0x3c0);
      __src = "NpcSpCheersDemoDrink";
      bVar7 = SBORROW4(iVar3,0x14);
      iVar10 = iVar3 + -0x14;
      bVar6 = iVar3 == 0x14;
      iVar11 = 0x14;
    }
    if (bVar6 || iVar10 < 0 != bVar7) {
      iVar11 = iVar3 + -1;
    }
    memcpy(pcVar13,__src,(long)iVar11);
    pcVar13[iVar11] = '\0';
  }
  else {
    uVar12 = 0;
    bVar6 = true;
    do {
      cVar4 = (*(undefined1 **)(lVar14 + 1000))[uVar12];
      if (cVar4 != (&DAT_040ee9d7)[uVar12]) break;
      if (cVar4 == '\0') {
        if (bVar6) goto LAB_01ff7dc0;
        break;
      }
      bVar6 = uVar12 < 0x80000;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x80001);
    local_40 = 0;
    lVar14 = *(long *)(param_1 + 0x10);
    local_38 = (ulong)(uint)local_38;
    FUN_01e5a930(0x40000000,lVar14,0xd,PTR_DAT_04bb2150,&local_40,(long)&local_38 + 4,
                 PTR_DAT_04bc1600,6);
    pcVar13 = *(char **)(lVar14 + 0x3b8);
    if (pcVar13 != "NpcSpCheersDemoDrink") {
      iVar10 = 0x14;
      if (*(int *)(lVar14 + 0x3c0) < 0x15) {
        iVar10 = *(int *)(lVar14 + 0x3c0) + -1;
      }
      memcpy(pcVar13,"NpcSpCheersDemoDrink",(long)iVar10);
      pcVar13[iVar10] = '\0';
    }
  }
LAB_01ff7f58:
  *(undefined4 *)(lVar14 + 0x3a0) = 0;
  *(undefined1 *)(lVar14 + 0x410) = 0;
  return;
}

