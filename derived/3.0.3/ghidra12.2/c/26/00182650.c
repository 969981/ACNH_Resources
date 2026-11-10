
undefined4 FUN_00182650(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  puVar8 = PTR_DAT_04bcb750;
  puVar7 = PTR_DAT_04bcb748;
LAB_0018269c:
  do {
    uVar11 = *(uint *)((long)param_1 + 0xb4);
    if (uVar11 < 0x103) {
      FUN_00180670(param_1);
      uVar11 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar11 < 0x103)) {
        return 0;
      }
      if (uVar11 == 0) {
        *(undefined4 *)((long)param_1 + 0x172c) = 0;
        if (param_2 == 4) {
          uVar10 = param_1[0x13];
          if ((long)uVar10 < 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = param_1[0xc] + (uVar10 & 0xffffffff);
          }
          FUN_00183f90(param_1,lVar13,*(uint *)((long)param_1 + 0xac) - uVar10,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          lVar14 = *param_1;
          lVar13 = *(long *)(lVar14 + 0x38);
          FUN_00183d90(lVar13);
          uVar11 = *(uint *)(lVar14 + 0x20);
          if (*(uint *)(lVar13 + 0x28) <= *(uint *)(lVar14 + 0x20)) {
            uVar11 = *(uint *)(lVar13 + 0x28);
          }
          uVar10 = (ulong)uVar11;
          if (uVar11 != 0) {
            memcpy(*(void **)(lVar14 + 0x18),*(void **)(lVar13 + 0x20),uVar10);
            *(ulong *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + uVar10;
            *(ulong *)(lVar13 + 0x20) = *(long *)(lVar13 + 0x20) + uVar10;
            *(ulong *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + uVar10;
            *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) - uVar11;
            lVar14 = *(long *)(lVar13 + 0x28) - uVar10;
            *(long *)(lVar13 + 0x28) = lVar14;
            if (lVar14 == 0) {
              *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x10);
            }
          }
          uVar9 = 2;
          if (*(int *)(*param_1 + 0x20) != 0) {
            uVar9 = 3;
          }
          return uVar9;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar10 = param_1[0x13];
          if ((long)uVar10 < 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = param_1[0xc] + (uVar10 & 0xffffffff);
          }
          FUN_00183f90(param_1,lVar13,*(uint *)((long)param_1 + 0xac) - uVar10,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          lVar14 = *param_1;
          lVar13 = *(long *)(lVar14 + 0x38);
          FUN_00183d90(lVar13);
          uVar11 = *(uint *)(lVar14 + 0x20);
          if (*(uint *)(lVar13 + 0x28) <= *(uint *)(lVar14 + 0x20)) {
            uVar11 = *(uint *)(lVar13 + 0x28);
          }
          uVar10 = (ulong)uVar11;
          if (uVar11 != 0) {
            memcpy(*(void **)(lVar14 + 0x18),*(void **)(lVar13 + 0x20),uVar10);
            *(ulong *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + uVar10;
            *(ulong *)(lVar13 + 0x20) = *(long *)(lVar13 + 0x20) + uVar10;
            *(ulong *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + uVar10;
            *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) - uVar11;
            lVar14 = *(long *)(lVar13 + 0x28) - uVar10;
            *(long *)(lVar13 + 0x28) = lVar14;
            if (lVar14 == 0) {
              *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      uVar10 = (ulong)*(uint *)((long)param_1 + 0xac);
      *(undefined4 *)(param_1 + 0x14) = 0;
      if ((uVar11 < 3) || (uVar10 == 0)) goto LAB_001827a4;
LAB_001826ec:
      pcVar3 = (char *)(param_1[0xc] + uVar10);
      cVar6 = pcVar3[-1];
      if ((cVar6 != *pcVar3) || ((cVar6 != pcVar3[1] || (cVar6 != pcVar3[2])))) goto LAB_001827a4;
      lVar13 = 0;
      do {
        pcVar4 = pcVar3 + lVar13;
        iVar12 = (int)pcVar4;
        if (cVar6 != pcVar4[3]) {
          iVar12 = iVar12 + 3;
          goto LAB_00182908;
        }
        if (cVar6 != pcVar4[4]) {
          iVar12 = iVar12 + 4;
          goto LAB_00182908;
        }
        if (cVar6 != pcVar4[5]) {
          iVar12 = iVar12 + 5;
          goto LAB_00182908;
        }
        if (cVar6 != pcVar4[6]) {
          iVar12 = iVar12 + 6;
          goto LAB_00182908;
        }
        if (cVar6 != pcVar4[7]) {
          iVar12 = iVar12 + 7;
          goto LAB_00182908;
        }
        if (cVar6 != pcVar4[8]) {
          iVar12 = iVar12 + 8;
          goto LAB_00182908;
        }
        if (cVar6 != pcVar4[9]) {
          iVar12 = iVar12 + 9;
          goto LAB_00182908;
        }
        uVar2 = lVar13 + 2;
        lVar13 = lVar13 + 8;
      } while ((uVar2 < 0xfa) && (cVar6 == pcVar4[10]));
      iVar12 = (int)pcVar3 + (int)lVar13 + 2;
LAB_00182908:
      uVar1 = (iVar12 - ((int)pcVar3 + 0x102)) + 0x102;
      if (uVar11 <= uVar1) {
        uVar1 = uVar11;
      }
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)(param_1 + 0x14) = uVar1;
      if (uVar1 < 3) goto LAB_001827a8;
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar11) = 1;
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar11) = 0;
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(char *)(param_1[0x2e0] + (ulong)uVar11) = (char)(uVar1 - 3);
      lVar13 = param_1[0x2e2];
      *(short *)((long)param_1 + (ulong)(byte)puVar7[(ulong)(uVar1 - 3) & 0xff] * 4 + 0x4d8) =
           *(short *)((long)param_1 + (ulong)(byte)puVar7[(ulong)(uVar1 - 3) & 0xff] * 4 + 0x4d8) +
           1;
      iVar12 = *(int *)((long)param_1 + 0x170c);
      *(short *)((long)param_1 + (ulong)(byte)*puVar8 * 4 + 0x9c8) =
           *(short *)((long)param_1 + (ulong)(byte)*puVar8 * 4 + 0x9c8) + 1;
      lVar14 = param_1[0x14];
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) - (int)lVar14;
      uVar11 = *(int *)((long)param_1 + 0xac) + (int)lVar14;
      *(uint *)((long)param_1 + 0xac) = uVar11;
      if (iVar12 != (int)lVar13) goto LAB_0018269c;
    }
    else {
      uVar10 = (ulong)*(uint *)((long)param_1 + 0xac);
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (uVar10 != 0) goto LAB_001826ec;
LAB_001827a4:
      uVar11 = *(uint *)((long)param_1 + 0x170c);
LAB_001827a8:
      bVar5 = *(byte *)(param_1[0xc] + uVar10);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar11) = 0;
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar11) = 0;
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(byte *)(param_1[0x2e0] + (ulong)uVar11) = bVar5;
      iVar12 = *(int *)((long)param_1 + 0x170c);
      lVar13 = param_1[0x2e2];
      *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0xd4) + 1;
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
      uVar11 = *(int *)((long)param_1 + 0xac) + 1;
      *(uint *)((long)param_1 + 0xac) = uVar11;
      if (iVar12 != (int)lVar13) goto LAB_0018269c;
    }
    uVar10 = param_1[0x13];
    if ((long)uVar10 < 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = param_1[0xc] + (uVar10 & 0xffffffff);
    }
    FUN_00183f90(param_1,lVar13,uVar11 - uVar10,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    lVar14 = *param_1;
    lVar13 = *(long *)(lVar14 + 0x38);
    FUN_00183d90(lVar13);
    uVar11 = *(uint *)(lVar14 + 0x20);
    if (*(uint *)(lVar13 + 0x28) <= *(uint *)(lVar14 + 0x20)) {
      uVar11 = *(uint *)(lVar13 + 0x28);
    }
    uVar10 = (ulong)uVar11;
    if (uVar11 != 0) {
      memcpy(*(void **)(lVar14 + 0x18),*(void **)(lVar13 + 0x20),uVar10);
      *(ulong *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + uVar10;
      *(ulong *)(lVar13 + 0x20) = *(long *)(lVar13 + 0x20) + uVar10;
      *(ulong *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + uVar10;
      *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) - uVar11;
      lVar14 = *(long *)(lVar13 + 0x28) - uVar10;
      *(long *)(lVar13 + 0x28) = lVar14;
      if (lVar14 == 0) {
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x10);
      }
    }
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}

