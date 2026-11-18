
uint FUN_032d6ca0(long *param_1,long *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  long lVar1;
  char *pcVar2;
  ushort *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort uVar14;
  ushort *puVar15;
  ulong uVar16;
  undefined *local_2098;
  long lStack_2090;
  undefined *local_2088;
  ushort *puStack_2080;
  undefined *local_2078;
  ushort *local_2070;
  int local_2068;
  ushort local_2064 [4095];
  undefined2 local_66;
  
  local_2064[0] = 0;
  local_2068 = 0x1000;
  local_66 = 0;
  local_2078 = &DAT_04b1bae0;
  local_2070 = local_2064;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar15 = (ushort *)param_2[1];
  if (local_2064 != puVar15) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = 0;
    do {
      if (*(short *)(param_2[1] + lVar10 * 2) == 0) goto LAB_032d6d7c;
      lVar1 = param_2[1] + lVar10 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar10 = lVar10 + 1;
        goto LAB_032d6d7c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar10 = lVar10 + 2;
        goto LAB_032d6d7c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_032d6d7c:
    uVar7 = (uint)lVar10;
    if (local_2068 <= (int)(uint)lVar10) {
      uVar7 = local_2068 - 1;
    }
    uVar16 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1;
    memcpy(local_2064,puVar15,uVar16);
    *(undefined2 *)((long)local_2064 + uVar16) = 0;
  }
  puVar6 = PTR_DAT_04bc8e78;
  pcVar2 = PTR_DAT_04bb2120;
  if (*(char **)(*param_1 + 0xe0) != (char *)0x0) {
    pcVar2 = *(char **)(*param_1 + 0xe0);
  }
  if ((pcVar2 == "$") || (*pcVar2 == '$')) {
    local_2088 = PTR_DAT_04bc8e78 + 0x10;
    puStack_2080 = local_2070;
    uVar16 = FUN_032d70a8(param_1,&local_2088);
    puVar15 = local_2070;
    if ((uVar16 & 1) != 0) {
      uVar14 = *local_2070;
      if (uVar14 == 0) {
        iVar9 = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        iVar9 = 0;
        puVar11 = local_2070;
        do {
          puVar12 = puVar11;
          puVar13 = puVar11;
          while ((uVar14 & 0xfffe) != 0xe) {
            puVar12 = puVar12 + 1;
            uVar14 = *puVar12;
            iVar8 = iVar8 + 1;
            puVar13 = puVar13 + 1;
            if (uVar14 == 0) goto LAB_032d701c;
          }
          if (uVar14 == 0xe) {
            puVar11 = (ushort *)((long)puVar13 + (ulong)puVar12[3] + 8);
          }
          else {
            puVar3 = puVar12;
            puVar11 = puVar13 + 3;
            if (uVar14 != 0xf) {
              puVar3 = (ushort *)0x0;
              puVar11 = puVar12;
            }
            puVar12 = puVar3;
          }
          iVar9 = iVar9 + ((uint)((int)puVar11 - (int)puVar13) >> 1 & 0xffff);
          if ((puVar12[1] == 0) && (puVar12[2] == 0)) {
            iVar8 = (uint)(puVar12[5] >> 1) + iVar8;
            iVar9 = iVar9 - (uint)(puVar12[5] >> 1);
          }
          uVar14 = *puVar11;
        } while (uVar14 != 0);
      }
LAB_032d701c:
      (**(code **)(*(long *)*param_1 + 0xf0))
                ((long *)*param_1,*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x68),iVar8 + iVar9);
      (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&DAT_04169358,0);
      (**(code **)(*(long *)*param_1 + 0x110))((long *)*param_1,puVar15,0,iVar8 + iVar9);
      uVar7 = 1;
      goto LAB_032d7080;
    }
  }
  puVar5 = PTR_DAT_04bc6338;
  plVar4 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar4 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  lVar10 = (**(code **)(*plVar4 + 0x10))();
  *(undefined1 *)(lVar10 + 0x18) = 0;
  local_2098 = puVar6 + 0x10;
  lStack_2090 = param_2[1];
  uVar7 = FUN_032dd7d0(&local_2078,*param_1,&local_2098,param_3,param_4 & 1,param_5 & 1);
  puVar15 = local_2070;
  *(undefined1 *)(lVar10 + 0x18) = 0;
  uVar14 = *local_2070;
  if (uVar14 == 0) {
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    iVar9 = 0;
    puVar11 = local_2070;
    do {
      puVar12 = puVar11;
      puVar13 = puVar11;
      while ((uVar14 & 0xfffe) != 0xe) {
        puVar12 = puVar12 + 1;
        uVar14 = *puVar12;
        iVar8 = iVar8 + 1;
        puVar13 = puVar13 + 1;
        if (uVar14 == 0) goto LAB_032d6fb8;
      }
      if (uVar14 == 0xe) {
        puVar11 = (ushort *)((long)puVar13 + (ulong)puVar12[3] + 8);
      }
      else {
        puVar3 = puVar12;
        puVar11 = puVar13 + 3;
        if (uVar14 != 0xf) {
          puVar3 = (ushort *)0x0;
          puVar11 = puVar12;
        }
        puVar12 = puVar3;
      }
      iVar9 = iVar9 + ((uint)((int)puVar11 - (int)puVar13) >> 1 & 0xffff);
      if ((puVar12[1] == 0) && (puVar12[2] == 0)) {
        iVar8 = (uint)(puVar12[5] >> 1) + iVar8;
        iVar9 = iVar9 - (uint)(puVar12[5] >> 1);
      }
      uVar14 = *puVar11;
    } while (uVar14 != 0);
  }
LAB_032d6fb8:
  (**(code **)(*(long *)*param_1 + 0xf0))
            ((long *)*param_1,*(undefined8 *)(*(long *)puVar5 + 0x68),iVar8 + iVar9);
  (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&DAT_04169358,0);
  (**(code **)(*(long *)*param_1 + 0x110))((long *)*param_1,puVar15,0,iVar8 + iVar9);
LAB_032d7080:
  return uVar7 & 1;
}

