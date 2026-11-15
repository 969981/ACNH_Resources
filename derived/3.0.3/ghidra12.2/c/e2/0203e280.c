
/* WARNING: Removing unreachable block (ram,0x0203e894) */
/* WARNING: Removing unreachable block (ram,0x0203e68c) */
/* WARNING: Removing unreachable block (ram,0x0203e76c) */
/* WARNING: Removing unreachable block (ram,0x0203e77c) */
/* WARNING: Removing unreachable block (ram,0x0203e69c) */
/* WARNING: Removing unreachable block (ram,0x0203e8a4) */

void FUN_0203e280(long param_1,long *param_2,float *param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  char *pcVar19;
  char cVar20;
  int iVar21;
  uint *puVar22;
  int *piVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined8 local_78;
  long lStack_70;
  undefined4 local_64;
  
  plVar16 = *(long **)PTR_DAT_04bb27d0;
  if (plVar16 == (long *)0x0) {
LAB_0203e2ec:
    bVar9 = true;
  }
  else {
    bVar5 = *(byte *)(*plVar16 + 0x473);
    if ((long)(char)bVar5 == 0xffffffffffffffff) goto LAB_0203e2ec;
    pbVar1 = (byte *)(*plVar16 + 0x48);
    uVar17 = (long)(char)bVar5 & 0xffffffff;
    pbVar2 = pbVar1 + uVar17 * 0x80;
    if (7 < bVar5) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) == 0) goto LAB_0203e2ec;
    lVar14 = plVar16[2] + 0x108 + uVar17 * 0xc;
    if (0xb < bVar5) {
      lVar14 = plVar16[2] + 0x108;
    }
    bVar9 = *(char *)(lVar14 + 10) != '\0';
  }
  uVar25 = *(undefined8 *)PTR_DAT_04bb4130;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar11 = FUN_006bd550(param_2[1],0);
  local_78 = CONCAT44(local_78._4_4_,uVar11);
  puVar13 = (uint *)FUN_0079e4d0(uVar25,&local_78);
  puVar8 = PTR_DAT_04bb40a8;
  puVar7 = PTR_DAT_04bb40a0;
  if (puVar13 != (uint *)0x0) {
    if (*puVar13 == 0) {
LAB_0203e46c:
      iVar21 = 0;
    }
    else {
      cVar20 = *PTR_DAT_04bb40a0;
      do {
        if (cVar20 == '\0') {
          cVar20 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar12 = *(uint *)(puVar8 + 8);
          if (-1 < (int)uVar12) {
            if ((int *)((ulong)uVar12 + (long)puVar13) == (int *)0x0) goto LAB_0203e46c;
            iVar21 = *(int *)((ulong)uVar12 + (long)puVar13);
            if (iVar21 < 0x46) goto LAB_0203e470;
            goto LAB_0203e4a4;
          }
          if (uVar12 != 0xffffffff) goto LAB_0203e46c;
        }
        puVar22 = (uint *)(ulong)*puVar13;
        iVar21 = 0;
        if ((*puVar13 == 0) || (puVar13 == puVar22)) goto LAB_0203e470;
        lVar14 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar22)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar13 + (lVar14 - (long)puVar22);
        if (lVar14 == 0) goto LAB_0203e46c;
        uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar22));
        *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
        iVar21 = 0;
        if (uVar17 == 0) goto LAB_0203e470;
        piVar23 = (int *)(lVar14 + 4);
        while (piVar23[-1] != 0x3ce2e8d8) {
          piVar23 = piVar23 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) {
            iVar21 = 0;
            goto LAB_0203e470;
          }
        }
        iVar21 = 0;
        if (*piVar23 != -1) {
          iVar21 = *piVar23;
        }
        *(int *)(puVar8 + 8) = iVar21;
      } while (*puVar13 != 0);
      iVar21 = 0;
    }
LAB_0203e470:
    uVar12 = iVar21 + 0xb;
    local_78 = CONCAT44(local_78._4_4_,uVar12);
    pbVar1 = *(byte **)PTR_DAT_04bb4760 + (ulong)uVar12 * 0x15;
    if (0x6c < uVar12) {
      pbVar1 = *(byte **)PTR_DAT_04bb4760;
    }
    if ((pbVar1[7] & 0xc) == 0) {
      uVar12 = (uint)*pbVar1 | (pbVar1[1] & 0xf) << 8;
      if ((pbVar1[1] & 8) != 0) {
        uVar12 = uVar12 | 0xfffff000;
      }
      *param_3 = (float)(int)uVar12;
      bVar5 = pbVar1[1];
      bVar4 = pbVar1[2];
      param_3[1] = 0.0;
      uVar6 = (uint)(bVar5 >> 4) | (uint)bVar4 << 4;
      uVar12 = uVar6 | 0xfffff000;
      if (-1 < (char)bVar4) {
        uVar12 = uVar6;
      }
      param_3[2] = (float)(int)uVar12;
      *param_4 = (uint)pbVar1[3] << 0x18;
      if (!bVar9) {
        return;
      }
      local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      lStack_70 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      uVar17 = FUN_035aa640((int)((float)(int)(*param_3 + 2.5) / 5.0) - (uint)(*param_3 + 2.5 < 0.0)
                            ,(int)((float)(int)(param_3[2] + 2.5) / 5.0) -
                             (uint)(param_3[2] + 2.5 < 0.0),&local_78,1);
      if ((uVar17 & 1) != 0) {
        return;
      }
    }
  }
LAB_0203e4a4:
  uVar17 = 0;
  bVar9 = true;
  do {
    plVar16 = (long *)(param_1 + 0x105d0 + uVar17 * 0x180);
    if ((*(char *)plVar16[1] != '\0') && (*(char *)(param_1 + 0x11050 + uVar17) != '\0')) {
      uVar26 = 0;
      do {
        plVar3 = plVar16 + uVar26 * 6;
        if (7 < uVar26) {
          plVar3 = plVar16;
        }
        if (*(char *)((long)plVar3 + 0x2c) != '\0') {
          (**(code **)(*plVar3 + 0x18))(plVar3);
          (**(code **)(*plVar3 + 0x18))(plVar3);
          lVar24 = plVar3[1];
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar14 = param_2[1];
          if (lVar24 == lVar14) {
LAB_0203e5fc:
            *param_3 = *(float *)(plVar3 + 4);
            param_3[1] = *(float *)((long)plVar3 + 0x24);
            param_3[2] = *(float *)(plVar3 + 5);
            if (bVar9) {
              *param_4 = 0;
              local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
              lStack_70 = *(long *)PTR_DAT_04bb27c8 + 0x28;
              uVar17 = FUN_035aa640((int)((float)(int)(*param_3 + 2.5) / 5.0) -
                                    (uint)(*param_3 + 2.5 < 0.0),
                                    (int)((float)(int)(param_3[2] + 2.5) / 5.0) -
                                    (uint)(param_3[2] + 2.5 < 0.0),&local_78,1);
              if ((uVar17 & 1) != 0) {
                return;
              }
            }
            goto LAB_0203e7b0;
          }
          uVar18 = 0;
          bVar10 = true;
          do {
            lVar24 = plVar3[1] + 2 + uVar18;
            cVar20 = *(char *)(lVar24 + -2);
            if (cVar20 != *(char *)(lVar14 + uVar18)) break;
            if (cVar20 == '\0') {
              if (bVar10) goto LAB_0203e5fc;
              break;
            }
            cVar20 = *(char *)(lVar24 + -1);
            if (cVar20 != *(char *)(lVar14 + uVar18 + 1)) break;
            if (cVar20 == '\0') goto LAB_0203e5fc;
            cVar20 = *(char *)(plVar3[1] + 2 + uVar18);
            if (cVar20 != *(char *)(lVar14 + uVar18 + 2)) break;
            if (cVar20 == '\0') goto LAB_0203e5fc;
            bVar10 = uVar18 < 0x7fffe;
            uVar18 = uVar18 + 3;
          } while (uVar18 != 0x80001);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(byte *)(param_1 + 0x11050 + uVar17));
    }
    bVar9 = uVar17 < 6;
    uVar17 = uVar17 + 1;
  } while (uVar17 != 7);
LAB_0203e7b0:
  puVar15 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar24 = (**(code **)(*(long *)*puVar15 + 0x38))();
    lVar14 = 0;
    if (lVar24 != 0) {
      lVar14 = lVar24 + 0x70;
    }
  }
  else if (puVar15 == (undefined8 *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if ((long *)puVar15[0x26] != (long *)0x0) {
      lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
    }
  }
  if ((*(long **)(lVar14 + 0x1bf260) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar14 + 0x1bf260), puVar15 == (undefined8 *)0x0)) {
    uVar12 = 1;
  }
  else {
    uVar12 = (**(code **)*puVar15)();
    uVar12 = uVar12 ^ 1;
  }
  uVar17 = FUN_028d7d60(*(long *)(lVar14 + 0x1bf248) + *(long *)(lVar14 + 0x1bf240),param_2,param_3)
  ;
  if ((uVar17 & 1) != 0) {
    *param_4 = 0;
    local_64 = 0;
    local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    lStack_70 = *(long *)PTR_DAT_04bb27c8 + 0x28;
    pcVar19 = (char *)param_2[1];
    if ((((*pcVar19 == 'g') && (pcVar19[1] == 'u')) && (pcVar19[2] == 'l')) ||
       (uVar17 = FUN_035aa640((int)((float)(int)(*param_3 + 2.5) / 5.0) -
                              (uint)(*param_3 + 2.5 < 0.0),
                              (int)((float)(int)(param_3[2] + 2.5) / 5.0) -
                              (uint)(param_3[2] + 2.5 < 0.0),&local_78,1), (uVar17 & 1) != 0))
    goto LAB_0203e970;
  }
  lVar24 = *(long *)PTR_DAT_04bb5c90;
  fVar27 = *(float *)(lVar24 + 0x40);
  *param_3 = fVar27;
  param_3[1] = *(float *)(lVar24 + 0x44);
  fVar28 = *(float *)(lVar24 + 0x48);
  param_3[1] = 0.0;
  *param_3 = fVar27 + 45.0;
  param_3[2] = fVar28 + 20.0;
LAB_0203e970:
  if ((((uVar12 & 1) == 0) && (*(long *)(lVar14 + 0x1bf260) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x1bf260) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  return;
}

