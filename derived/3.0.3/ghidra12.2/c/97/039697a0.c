
void FUN_039697a0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long local_4a8;
  void *local_4a0;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_38;
  float fStack_34;
  
  if ((param_2 & 1) != 0) {
    puVar10 = &DAT_05ae9148;
    if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x78);
    }
    if ((*(ushort *)(param_1 + 0x8a) & 8) != 0) {
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x1f8) + 8);
    }
    fVar19 = *(float *)(puVar10 + 3);
    fVar20 = *(float *)((long)puVar10 + 0x1c);
    fVar21 = *(float *)(puVar10 + 4);
    fVar11 = *(float *)((long)puVar10 + 0x24);
    fVar13 = *(float *)(puVar10 + 1);
    fVar15 = *(float *)((long)puVar10 + 0xc);
    fVar18 = *(float *)(puVar10 + 2);
    fVar17 = *(float *)((long)puVar10 + 0x14);
    fVar22 = *(float *)(puVar10 + 5);
    fVar12 = *(float *)((long)puVar10 + 0x2c);
    fVar14 = *(float *)(puVar10 + 6);
    fVar16 = *(float *)((long)puVar10 + 0x34);
    if (((*PTR_DAT_04bb6208 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6208);
    }
    fVar13 = (-(fVar19 * fVar11) - fVar17 * fVar13) - fVar16 * fVar22;
    fVar12 = (-(fVar20 * fVar11) - fVar17 * fVar15) - fVar16 * fVar12;
    fVar11 = (-(fVar21 * fVar11) - fVar17 * fVar18) - fVar16 * fVar14;
    uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6200);
    if ((uVar6 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x1f8);
      if (lVar8 == 0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = *(float *)(lVar8 + 200);
      }
      fVar15 = fVar13 - *(float *)(puVar10 + 5) * fVar14;
      fVar16 = fVar12 - *(float *)((long)puVar10 + 0x2c) * fVar14;
      fVar14 = fVar11 - *(float *)(puVar10 + 6) * fVar14;
    }
    else {
      fVar15 = *(float *)((long)puVar10 + 0x44);
      fVar16 = *(float *)(puVar10 + 9);
      fVar14 = *(float *)((long)puVar10 + 0x4c);
      lVar8 = *(long *)(param_1 + 0x1f8);
    }
    FUN_038d1270((double)fVar13,(double)fVar11,(double)fVar12,(double)fVar15,(double)fVar16,
                 (double)fVar14,(double)fVar19,(double)fVar20,*(undefined8 *)(lVar8 + 0x3a8),
                 "Position  ( %f, %f, %f )\nAttention ( %f, %f, %f )\nUp Vector ( %f, %f, %f )");
  }
  if ((param_2 >> 1 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x1f8);
    if (((*(ushort *)(param_1 + 0x8a) & 0x21) == 0) || ((*(ushort *)(param_1 + 0x8a) >> 1 & 1) == 0)
       ) {
      puVar10 = &DAT_05ae91b0;
      if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)(param_1 + 0x80);
      }
    }
    else {
      puVar10 = *(undefined8 **)(lVar8 + 0x100);
    }
    plVar9 = (long *)(*(long *)(lVar8 + 0x3a8) + (ulong)(1 < *(uint *)(lVar8 + 0x3a0)) * 0x218);
    if (((*PTR_DAT_04bb6230 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6230);
    }
    if ((puVar10 == (undefined8 *)0x0) ||
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6228), (uVar6 & 1) == 0)) {
      if (((*PTR_DAT_04bd0ee0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd0ee0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bd0ed8 = PTR_DAT_04bb6238 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd0ee0);
      }
      if ((puVar10 == (undefined8 *)0x0) ||
         (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bd0ed8), (uVar6 & 1) == 0)) {
        if (((*PTR_DAT_04bbdcb0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdcb0), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bbdca8 = PTR_DAT_04bb6238 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbdcb0);
        }
        if ((puVar10 == (undefined8 *)0x0) ||
           (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bbdca8), (uVar6 & 1) == 0)) {
          if (((*PTR_DAT_04bd0ef0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd0ef0), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bd0ee8 = PTR_DAT_04bb6238 + 0x10;
            __cxa_guard_release(PTR_DAT_04bd0ef0);
          }
          if ((puVar10 == (undefined8 *)0x0) ||
             (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bd0ee8), (uVar6 & 1) == 0)) {
            pcVar7 = "Unknown\n";
          }
          else {
            pcVar7 = "DirectProjection";
          }
        }
        else {
          pcVar7 = "OrthoProjection";
        }
      }
      else {
        pcVar7 = "FrustumProjection";
      }
    }
    else {
      pcVar7 = "PespectiveProjection";
    }
    FUN_038d1270(plVar9,pcVar7);
    lVar4 = plVar9[1];
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar8 = 0;
    do {
      if (*(char *)(plVar9[1] + lVar8) == '\0') goto LAB_03969a8c;
      lVar2 = plVar9[1] + lVar8;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03969a8c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_03969a8c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_03969a8c:
    uVar3 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
    uVar1 = (int)plVar9[2] + ~uVar3;
    if (1 < (int)((int)plVar9[2] - uVar3)) {
      uVar1 = 1;
    }
    if (0 < (int)uVar1) {
      memcpy((void *)(lVar4 + (ulong)uVar3),&DAT_040c2970,(ulong)uVar1);
      *(undefined1 *)(lVar4 + (ulong)uVar1 + (ulong)uVar3) = 0;
    }
    FUN_039864dc(puVar10,&fStack_34,&local_38,&fStack_84,&local_88,&local_90);
    FUN_006e9454((double)fStack_34,(double)local_38,(double)fStack_84,(double)(local_88 * 57.295776)
                 ,(double)local_90,(double)fStack_8c,&local_4a8,
                 "Near:%f Far:%f\nAspect:%f Fovy:%f Offset:%f %f");
    lVar4 = plVar9[1];
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar8 = 0;
    do {
      if (*(char *)(plVar9[1] + lVar8) == '\0') goto LAB_03969b80;
      lVar2 = plVar9[1] + lVar8;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03969b80;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_03969b80;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_03969b80:
    uVar1 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
    (**(code **)(local_4a8 + 0x18))(&local_4a8);
    lVar8 = 0;
    do {
      if (*(char *)((long)local_4a0 + lVar8) == '\0') goto LAB_03969bdc;
      if (*(char *)((long)local_4a0 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03969bdc;
      }
      if (*(char *)((long)local_4a0 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_03969bdc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_03969bdc:
    uVar3 = (uint)lVar8;
    if ((int)((int)plVar9[2] - uVar1) <= (int)(uint)lVar8) {
      uVar3 = (int)plVar9[2] + ~uVar1;
    }
    if (0 < (int)uVar3) {
      (**(code **)(local_4a8 + 0x18))(&local_4a8);
      memcpy((void *)(lVar4 + (ulong)uVar1),local_4a0,(ulong)uVar3);
      *(undefined1 *)(lVar4 + (int)(uVar3 + uVar1)) = 0;
    }
  }
  return;
}

