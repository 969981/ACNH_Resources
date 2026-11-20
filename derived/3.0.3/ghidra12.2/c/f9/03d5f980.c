
void FUN_03d5f980(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined *local_60;
  undefined8 uStack_58;
  
  lVar12 = param_3[4];
  if (lVar12 == 0) {
LAB_03d5ff34:
    pvVar6 = (void *)0x0;
    *(undefined1 *)(param_1 + 0xad0) = 0;
    *(undefined4 *)(param_1 + 0x390) = 1;
  }
  else {
    lVar5 = FUN_00364ec0(lVar12,"InPattern");
    if (lVar5 != 0) {
      uVar9 = (ulong)*(uint *)(lVar5 + 4);
      if ((char *)(lVar5 + uVar9) == s_Tempo_04b8fe18) {
LAB_03d5fa30:
        *(undefined4 *)(param_1 + 0x398) = 0;
        uVar9 = (ulong)*(uint *)(lVar5 + 4);
      }
      else {
        uVar11 = 0;
        bVar4 = true;
        do {
          cVar3 = ((char *)(lVar5 + uVar9))[uVar11];
          if (cVar3 != s_Tempo_04b8fe18[uVar11]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_03d5fa30;
            break;
          }
          bVar4 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
      }
      if ((char *)(lVar5 + uVar9) == s_Total_04b8fe1f) {
LAB_03d5fa84:
        *(undefined4 *)(param_1 + 0x398) = 1;
        uVar9 = (ulong)*(uint *)(lVar5 + 4);
      }
      else {
        uVar11 = 0;
        bVar4 = true;
        do {
          cVar3 = ((char *)(lVar5 + uVar9))[uVar11];
          if (cVar3 != s_Total_04b8fe1f[uVar11]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_03d5fa84;
            break;
          }
          bVar4 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
      }
      if ((undefined1 *)(lVar5 + uVar9) == &DAT_04b8fe26) {
LAB_03d5fad8:
        *(undefined4 *)(param_1 + 0x398) = 2;
      }
      else {
        uVar11 = 0;
        bVar4 = true;
        do {
          cVar3 = ((undefined1 *)(lVar5 + uVar9))[uVar11];
          if (cVar3 != (&DAT_04b8fe26)[uVar11]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_03d5fad8;
            break;
          }
          bVar4 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
      }
    }
    lVar5 = FUN_00364ec0(lVar12,"OutPattern");
    if (lVar5 != 0) {
      uVar9 = (ulong)*(uint *)(lVar5 + 4);
      if ((char *)(lVar5 + uVar9) == s_Tempo_04b8fe18) {
LAB_03d5fb40:
        *(undefined4 *)(param_1 + 0x39c) = 0;
        uVar9 = (ulong)*(uint *)(lVar5 + 4);
      }
      else {
        uVar11 = 0;
        bVar4 = true;
        do {
          cVar3 = ((char *)(lVar5 + uVar9))[uVar11];
          if (cVar3 != s_Tempo_04b8fe18[uVar11]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_03d5fb40;
            break;
          }
          bVar4 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
      }
      if ((char *)(lVar5 + uVar9) == s_Total_04b8fe1f) {
LAB_03d5fb94:
        *(undefined4 *)(param_1 + 0x39c) = 1;
        uVar9 = (ulong)*(uint *)(lVar5 + 4);
      }
      else {
        uVar11 = 0;
        bVar4 = true;
        do {
          cVar3 = ((char *)(lVar5 + uVar9))[uVar11];
          if (cVar3 != s_Total_04b8fe1f[uVar11]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_03d5fb94;
            break;
          }
          bVar4 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
      }
      if ((undefined1 *)(lVar5 + uVar9) == &DAT_04b8fe26) {
LAB_03d5fbe8:
        *(undefined4 *)(param_1 + 0x39c) = 2;
      }
      else {
        uVar11 = 0;
        bVar4 = true;
        do {
          cVar3 = ((undefined1 *)(lVar5 + uVar9))[uVar11];
          if (cVar3 != (&DAT_04b8fe26)[uVar11]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_03d5fbe8;
            break;
          }
          bVar4 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
      }
    }
    if ((*(int *)(param_1 + 0x398) == 0) && (lVar5 = FUN_00364ec0(lVar12,"InTempo"), lVar5 != 0)) {
      uVar8 = (uint)*(ushort *)(lVar5 + 8);
      if (*(ushort *)(lVar5 + 8) != 0) {
        uVar8 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
      }
      *(uint *)(param_1 + 0x3a0) = uVar8;
    }
    if (*(int *)(param_1 + 0x39c) == 0) {
      if (lVar12 == 0) goto LAB_03d5ff34;
      lVar5 = FUN_00364ec0(lVar12,"OutTempo");
      if (lVar5 != 0) {
        uVar8 = (uint)*(ushort *)(lVar5 + 8);
        if (*(ushort *)(lVar5 + 8) != 0) {
          uVar8 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
        }
        *(uint *)(param_1 + 0x3a4) = uVar8;
      }
    }
    if (((lVar12 != 0) && (*(int *)(param_1 + 0x398) == 1)) &&
       (lVar5 = FUN_00364ec0(lVar12,"InTotal"), lVar5 != 0)) {
      uVar8 = (uint)*(ushort *)(lVar5 + 8);
      if (*(ushort *)(lVar5 + 8) != 0) {
        uVar8 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
      }
      *(uint *)(param_1 + 0x3a8) = uVar8;
    }
    if (*(int *)(param_1 + 0x39c) == 1) {
      if (lVar12 == 0) goto LAB_03d5ff34;
      lVar5 = FUN_00364ec0(lVar12,"OutTotal");
      if (lVar5 != 0) {
        uVar8 = (uint)*(ushort *)(lVar5 + 8);
        if (*(ushort *)(lVar5 + 8) != 0) {
          uVar8 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
        }
        *(uint *)(param_1 + 0x3ac) = uVar8;
      }
    }
    else if (lVar12 == 0) goto LAB_03d5ff34;
    lVar5 = FUN_00364ec0(lVar12,"InRandom");
    if (((lVar5 != 0) && (*(short *)(lVar5 + 8) != 0)) &&
       (*(int *)(lVar5 + (ulong)*(uint *)(lVar5 + 4)) != 0)) {
      *(undefined1 *)(param_1 + 0x3b0) = 1;
    }
    lVar5 = FUN_00364ec0(lVar12,"OutRandom");
    if (((lVar5 != 0) && (*(short *)(lVar5 + 8) != 0)) &&
       (*(int *)(lVar5 + (ulong)*(uint *)(lVar5 + 4)) != 0)) {
      *(undefined1 *)(param_1 + 0x3b1) = 1;
    }
    lVar5 = FUN_00364ec0(lVar12,"CvSetting");
    if (lVar5 == 0) {
      *(undefined1 *)(param_1 + 0xad0) = 0;
    }
    else {
      uVar15 = 0;
      uVar16 = 0;
      *(undefined1 *)(param_1 + 0xad0) = 1;
      if (*(short *)(lVar5 + 8) != 0) {
        uVar16 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
      }
      *(undefined4 *)(param_1 + 0xac8) = uVar16;
      if (1 < *(ushort *)(lVar5 + 8)) {
        uVar15 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 4);
      }
      *(undefined4 *)(param_1 + 0xacc) = uVar15;
      uVar15 = 0;
      fVar17 = 0.0;
      if (2 < *(ushort *)(lVar5 + 8)) {
        fVar17 = *(float *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 8);
      }
      *(char *)(*(long *)(param_1 + 0xa90) + 0x10) = (char)(int)fVar17;
      if (3 < *(ushort *)(lVar5 + 8)) {
        uVar15 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0xc);
      }
      *(undefined4 *)(param_1 + 0xa98) = uVar15;
      uVar15 = 0;
      uVar16 = 0;
      if (4 < *(ushort *)(lVar5 + 8)) {
        uVar16 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x10);
      }
      *(undefined4 *)(param_1 + 0xa9c) = uVar16;
      if (5 < *(ushort *)(lVar5 + 8)) {
        uVar15 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x14);
      }
      *(undefined4 *)(param_1 + 0xaa0) = uVar15;
      uVar15 = 0;
      uVar16 = 0;
      if (6 < *(ushort *)(lVar5 + 8)) {
        uVar16 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x18);
      }
      *(undefined4 *)(param_1 + 0xaa4) = uVar16;
      if (7 < *(ushort *)(lVar5 + 8)) {
        uVar15 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x1c);
      }
      *(undefined4 *)(param_1 + 0xaa8) = uVar15;
      uVar15 = 0;
      uVar16 = 0;
      if (8 < *(ushort *)(lVar5 + 8)) {
        uVar16 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x20);
      }
      *(undefined4 *)(param_1 + 0xaac) = uVar16;
      if (9 < *(ushort *)(lVar5 + 8)) {
        uVar15 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x24);
      }
      *(undefined4 *)(param_1 + 0xab0) = uVar15;
      uVar15 = 0;
      uVar16 = 0;
      if (10 < *(ushort *)(lVar5 + 8)) {
        uVar16 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x28);
      }
      *(undefined4 *)(param_1 + 0xab4) = uVar16;
      if (0xb < *(ushort *)(lVar5 + 8)) {
        uVar15 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x2c);
      }
      *(undefined4 *)(param_1 + 0xab8) = uVar15;
      uVar15 = 0;
      uVar16 = 0;
      if (0xc < *(ushort *)(lVar5 + 8)) {
        uVar16 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x30);
      }
      *(undefined4 *)(param_1 + 0xabc) = uVar16;
      if (0xd < *(ushort *)(lVar5 + 8)) {
        uVar15 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x34);
      }
      *(undefined4 *)(param_1 + 0xac0) = uVar15;
      uVar15 = 0;
      if (0xe < *(ushort *)(lVar5 + 8)) {
        uVar15 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 0x38);
      }
      *(undefined4 *)(param_1 + 0xac4) = uVar15;
    }
    *(undefined4 *)(param_1 + 0x390) = 1;
    lVar5 = FUN_00364ec0(lVar12,"CharPatternNum");
    if (lVar5 != 0) {
      uVar8 = (uint)*(ushort *)(lVar5 + 8);
      if (*(ushort *)(lVar5 + 8) != 0) {
        uVar8 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
      }
      *(uint *)(param_1 + 0x390) = uVar8;
    }
    lVar5 = FUN_00364ec0(lVar12,"AutoOutWaitTime");
    if (lVar5 != 0) {
      uVar8 = (uint)*(ushort *)(lVar5 + 8);
      if (*(ushort *)(lVar5 + 8) != 0) {
        uVar8 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
      }
      *(uint *)(param_1 + 0x3b4) = uVar8;
    }
    pvVar6 = (void *)FUN_00364d70(lVar12,"CharBase");
  }
  pvVar13 = *(void **)(param_1 + 0x278);
  if (pvVar13 != pvVar6) {
    lVar5 = 0;
    do {
      if (*(char *)((long)pvVar6 + lVar5) == '\0') goto LAB_03d6000c;
      if (*(char *)((long)pvVar6 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d6000c;
      }
      if (*(char *)((long)pvVar6 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d6000c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d6000c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x280) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x280) + -1;
    }
    memcpy(pvVar13,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar13 + (long)iVar2) = 0;
  }
  if (lVar12 == 0) {
LAB_03d600a4:
    puVar10 = *(undefined1 **)(param_1 + 0x2b0);
LAB_03d600ec:
    *puVar10 = 0;
    *(undefined4 *)(param_1 + 0x394) = 0x20;
    if (lVar12 == 0) goto LAB_03d60128;
  }
  else {
    lVar5 = FUN_00364d70(lVar12,"PictureBase");
    if (lVar5 == 0) goto LAB_03d600a4;
    pvVar6 = (void *)FUN_00364d70(lVar12,"PictureBase");
    pvVar13 = *(void **)(param_1 + 0x2b0);
    if (pvVar13 != pvVar6) {
      lVar5 = 0;
      do {
        if (*(char *)((long)pvVar6 + lVar5) == '\0') goto LAB_03d600c8;
        if (*(char *)((long)pvVar6 + lVar5 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_03d600c8;
        }
        if (*(char *)((long)pvVar6 + lVar5 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_03d600c8;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_03d600c8:
      iVar2 = (int)lVar5;
      if (*(int *)(param_1 + 0x2b8) <= (int)lVar5) {
        iVar2 = *(int *)(param_1 + 0x2b8) + -1;
      }
      memcpy(pvVar13,pvVar6,(long)iVar2);
      puVar10 = (undefined1 *)((long)pvVar13 + (long)iVar2);
      goto LAB_03d600ec;
    }
    *(undefined4 *)(param_1 + 0x394) = 0x20;
  }
  lVar5 = FUN_00364ec0(lVar12,"MaxTextLength");
  if (lVar5 != 0) {
    uVar8 = (uint)*(ushort *)(lVar5 + 8);
    if (*(ushort *)(lVar5 + 8) != 0) {
      uVar8 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
    }
    *(uint *)(param_1 + 0x394) = uVar8;
  }
LAB_03d60128:
  pvVar6 = *(void **)(param_1 + 0x2e8);
  plVar14 = param_3 + 2;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pvVar13 = (void *)param_3[3];
  if (pvVar6 != pvVar13) {
    (**(code **)(param_3[2] + 0x18))(plVar14);
    lVar5 = 0;
    do {
      if (*(char *)(param_3[3] + lVar5) == '\0') goto LAB_03d601a0;
      lVar1 = param_3[3] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d601a0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d601a0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d601a0:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x2f0) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x2f0) + -1;
    }
    memcpy(pvVar6,pvVar13,(long)iVar2);
    *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x340);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar13 = (void *)param_3[1];
  if (pvVar6 != pvVar13) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar5 = 0;
    do {
      if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_03d6023c;
      lVar1 = param_3[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d6023c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d6023c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d6023c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x348) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x348) + -1;
    }
    memcpy(pvVar6,pvVar13,(long)iVar2);
    *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
  }
  if (lVar12 == 0) {
    uStack_58 = 0;
  }
  else {
    uStack_58 = FUN_00364d70(lVar12,&DAT_040d74fc);
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  uVar7 = FUN_03c688b0(param_2,&local_60);
  *(undefined8 *)(param_1 + 0x268) = uVar7;
  return;
}

