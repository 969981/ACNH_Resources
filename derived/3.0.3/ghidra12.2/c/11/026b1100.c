
void FUN_026b1100(long param_1)

{
  void *pvVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  int *__s;
  int *__s_00;
  long lVar16;
  uint local_2ff4;
  undefined1 auStack_2fe8 [28];
  int iStack_2fcc;
  long alStack_2fc8 [2];
  int aiStack_2fb8 [368];
  undefined1 auStack_29f8 [1520];
  undefined1 auStack_2408 [1520];
  undefined1 auStack_1e18 [1520];
  undefined1 auStack_1828 [1520];
  undefined1 auStack_1238 [1520];
  undefined1 auStack_c48 [1520];
  undefined1 auStack_658 [1528];
  
  if (DAT_05574040 != 0) {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) {
        return;
      }
      lVar10 = lVar10 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return;
      }
      lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar10 == 0) {
        return;
      }
    }
    plVar12 = *(long **)(lVar10 + 0xe7290);
    if ((plVar12 == (long *)0x0) || (puVar11 = (undefined8 *)*plVar12, puVar11 == (undefined8 *)0x0)
       ) {
      local_2ff4 = 0;
    }
    else {
      local_2ff4 = (**(code **)*puVar11)();
    }
    FUN_027b5970(auStack_2fe8);
    FUN_027b5970(auStack_29f8);
    FUN_027b5970(auStack_2408);
    FUN_027b5970(auStack_1e18);
    FUN_027b5970(auStack_1828);
    FUN_027b5970(auStack_1238);
    FUN_027b5970(auStack_c48);
    FUN_027b5970(auStack_658);
    piVar14 = (int *)(param_1 + 4);
    if ((*(int *)(param_1 + 0x20) != 0) && (*piVar14 != 0)) {
      FUN_027478c0(param_1 + 0x3c);
      FUN_027b6050(auStack_2fe8,piVar14);
      memset(piVar14,0,0x5f0);
      FUN_027b5970(piVar14);
    }
    if ((*(int *)(param_1 + 0x610) != 0) && (*(int *)(param_1 + 0x5f4) != 0)) {
      pvVar1 = (void *)(param_1 + 0x5f4);
      FUN_027478c0(param_1 + 0x62c);
      FUN_027b6050(auStack_29f8,pvVar1);
      memset(pvVar1,0,0x5f0);
      FUN_027b5970(pvVar1);
    }
    if ((*(int *)(param_1 + 0xc00) != 0) && (*(int *)(param_1 + 0xbe4) != 0)) {
      pvVar1 = (void *)(param_1 + 0xbe4);
      FUN_027478c0(param_1 + 0xc1c);
      FUN_027b6050(auStack_2408,pvVar1);
      memset(pvVar1,0,0x5f0);
      FUN_027b5970(pvVar1);
    }
    if ((*(int *)(param_1 + 0x11f0) != 0) && (*(int *)(param_1 + 0x11d4) != 0)) {
      pvVar1 = (void *)(param_1 + 0x11d4);
      FUN_027478c0(param_1 + 0x120c);
      FUN_027b6050(auStack_1e18,pvVar1);
      memset(pvVar1,0,0x5f0);
      FUN_027b5970(pvVar1);
    }
    if ((*(int *)(param_1 + 0x17e0) != 0) && (*(int *)(param_1 + 0x17c4) != 0)) {
      pvVar1 = (void *)(param_1 + 0x17c4);
      FUN_027478c0(param_1 + 0x17fc);
      FUN_027b6050(auStack_1828,pvVar1);
      memset(pvVar1,0,0x5f0);
      FUN_027b5970(pvVar1);
    }
    if ((*(int *)(param_1 + 0x1dd0) != 0) && (*(int *)(param_1 + 0x1db4) != 0)) {
      pvVar1 = (void *)(param_1 + 0x1db4);
      FUN_027478c0(param_1 + 0x1dec);
      FUN_027b6050(auStack_1238,pvVar1);
      memset(pvVar1,0,0x5f0);
      FUN_027b5970(pvVar1);
    }
    if ((*(int *)(param_1 + 0x23c0) != 0) && (*(int *)(param_1 + 0x23a4) != 0)) {
      pvVar1 = (void *)(param_1 + 0x23a4);
      FUN_027478c0(param_1 + 0x23dc);
      FUN_027b6050(auStack_c48,pvVar1);
      memset(pvVar1,0,0x5f0);
      FUN_027b5970(pvVar1);
    }
    if ((*(int *)(param_1 + 0x29b0) != 0) && (*(int *)(param_1 + 0x2994) != 0)) {
      pvVar1 = (void *)(param_1 + 0x2994);
      FUN_027478c0(param_1 + 0x29cc);
      FUN_027b6050(auStack_658,pvVar1);
      memset(pvVar1,0,0x5f0);
      FUN_027b5970(pvVar1);
    }
    lVar16 = 0;
    piVar2 = (int *)(param_1 + 0x2f84);
    lVar15 = 0xa0;
    do {
      lVar3 = param_1 + 0x30c0 + lVar16;
      __s = (int *)(lVar3 + -0x120);
      __s_00 = (int *)(lVar3 + -0x13c);
      if ((*__s != 0 && *__s_00 != 0) && (iVar8 = FUN_0265fdb0(__s), iVar8 != -1)) {
        FUN_027478c0(lVar3 + -0x104);
        uVar9 = FUN_026b35a0(param_1);
        piVar5 = piVar14 + (ulong)uVar9 * 0x17c;
        if (7 < uVar9) {
          piVar5 = piVar14;
        }
        FUN_027b6388(piVar5,__s_00);
        lVar4 = param_1 + lVar16;
        memset(__s_00,0,0x158);
        *(undefined8 *)(lVar4 + 0x2f88) = 0;
        *(undefined1 *)(lVar3 + -0x124) = 2;
        *(undefined8 *)(lVar4 + 0x2f90) = 0;
        *(undefined4 *)(lVar4 + 0x2f98) = 0;
        memset(__s,0,0x120);
        *(undefined1 *)(lVar3 + 7) = 0;
        *(undefined2 *)(param_1 + 0x30c0 + lVar16) = 999;
        *(undefined2 *)(lVar3 + 4) = 999;
        *(undefined1 *)(lVar3 + 2) = 1;
        *(undefined2 *)(lVar3 + 0x10) = 0xfffe;
        *(undefined1 *)(lVar3 + 6) = 1;
        *(undefined1 *)(lVar3 + 8) = 0;
        *(undefined4 *)(lVar3 + 10) = 0;
        *(undefined2 *)(lVar3 + 0x12) = 0;
        *(undefined4 *)(lVar4 + 0x30d4) = 0;
        FUN_0277d4ac();
        *(undefined1 *)(lVar3 + 0x1a) = 0;
        *(undefined2 *)(lVar3 + 0x18) = 0xffff;
      }
      lVar16 = lVar16 + 0x158;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar8 = 0;
    do {
      lVar16 = (long)iVar8;
      lVar15 = 0;
      plVar12 = (long *)(param_1 + 0x2fa4);
      do {
        if ((*(int *)((long)plVar12 + -4) == *(int *)(auStack_2fe8 + lVar16 * 0x5f0 + 0x1c)) &&
           ((alStack_2fc8[lVar16 * 0xbe] == *plVar12 &&
            alStack_2fc8[lVar16 * 0xbe + 1] == plVar12[1]) &&
            aiStack_2fb8[lVar16 * 0x17c] == (int)plVar12[2])) {
          if ((int)lVar15 != 1) {
            uVar13 = -lVar15;
            goto LAB_026b1598;
          }
          break;
        }
        plVar12 = plVar12 + 0x2b;
        bVar7 = lVar15 != -0x9f;
        lVar15 = lVar15 + -1;
      } while (bVar7);
      uVar13 = 0;
      piVar14 = piVar2;
      do {
        if (piVar14[7] == 0 || *piVar14 == 0) goto LAB_026b1598;
        if ((piVar14[0x5d] == 0) || (piVar14[0x56] == 0)) {
          uVar13 = uVar13 + 1;
          goto LAB_026b1598;
        }
        uVar13 = uVar13 + 2;
        piVar14 = piVar14 + 0xac;
      } while (uVar13 != 0xa0);
      if (DAT_05594b4c == '\x01') {
        uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar9 = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar9;
      }
      else {
        uVar9 = nn::os::GetSystemTick();
        uVar6 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
        uVar9 = uVar6 ^ uVar6 * 0x800;
        uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
        uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 3;
        uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
        uVar9 = uVar9 >> 8 ^ uVar6 >> 0x13 ^ uVar9 ^ uVar6;
      }
      uVar13 = (ulong)uVar9 * 0xa0 >> 0x20;
LAB_026b1598:
      piVar14 = piVar2 + (uVar13 & 0xffffffff) * 0x56;
      if (0x9f < (uint)uVar13) {
        piVar14 = piVar2;
      }
      FUN_027a896c(piVar14,auStack_2fe8 + lVar16 * 0x5f0);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 8);
    if ((((local_2ff4 & 1) != 0) && (lVar10 = *(long *)(lVar10 + 0xe7290), lVar10 != 0)) &&
       (puVar11 = *(undefined8 **)(lVar10 + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
  return;
}

