
void FUN_036a0730(int *param_1,undefined4 *param_2)

{
  void *__dest;
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  iVar7 = 0;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x330) == 0) {
      iVar7 = 0;
    }
    else {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar4 = FUN_006bd550(*puVar5,0);
      iVar7 = 0;
      if (iVar4 == 0x758f7eaf) {
        iVar7 = 0;
        if (*(long *)puVar1 != 0) {
          lVar8 = *(long *)(*(long *)puVar1 + 0x330);
          iVar7 = 0;
          if (lVar8 != 0) {
            iVar7 = *(int *)(lVar8 + 0x244);
          }
        }
      }
    }
  }
  if (DAT_0529240c == iVar7) {
    local_34 = 1;
  }
  else if (((DAT_05ab5ea8 == 0) || ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0))))
          || ((*(int *)(DAT_05ab5ea8 + 0x14) != 4 && (*(int *)(DAT_05ab5ea8 + 0x14) != 5)))) {
    if ((DAT_0523adf0 == 0) || (*(int *)(DAT_0523adf0 + 0x98) == 0)) {
      if (DAT_04c487d4 != -1) {
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar1 + 4) & 1) != 0) {
          local_34 = 4;
          goto LAB_036a08bc;
        }
      }
      local_34 = param_1[0x411];
      if ((char)param_1[0x410] == '\0') {
        return;
      }
    }
    else {
      local_34 = 3;
    }
  }
  else {
    local_34 = 0;
  }
LAB_036a08bc:
  piVar2 = param_1 + (ulong)local_34 * 0xd0;
  if (4 < local_34) {
    piVar2 = param_1;
  }
  local_3c = *param_2;
  local_38 = param_2[1];
  iVar7 = *piVar2;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      lVar11 = *(long *)(*(long *)(piVar2 + 2) + lVar8 * 8);
      uVar6 = FUN_0277d7b4(lVar11,&local_3c);
      if ((((uVar6 & 1) != 0) && (*(char *)(lVar11 + 3) == local_3c._3_1_)) &&
         (*(int *)(lVar11 + 4) == local_38)) {
        iVar7 = *piVar2;
        iVar4 = (int)lVar8;
        if (-1 < iVar4) {
          if (iVar4 < iVar7) {
            puVar5 = *(undefined8 **)(*(long *)(piVar2 + 2) + lVar8 * 8);
            *puVar5 = *(undefined8 *)(piVar2 + 4);
            *(undefined8 **)(piVar2 + 4) = puVar5;
            iVar7 = *piVar2;
          }
          if (iVar4 < iVar7) {
            if (iVar4 + 1 < iVar7) {
              __dest = (void *)(*(long *)(piVar2 + 2) + lVar8 * 8);
              memmove(__dest,(void *)((long)__dest + 8),(iVar7 - lVar8) * 8 - 8);
              iVar7 = *piVar2;
            }
            iVar7 = iVar7 + -1;
            *piVar2 = iVar7;
          }
          iVar4 = piVar2[1];
          iVar9 = iVar7;
          goto LAB_036a0a30;
        }
        break;
      }
      iVar7 = *piVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar7);
  }
  iVar4 = piVar2[1];
  iVar9 = iVar7;
  if (iVar4 <= iVar7) {
    lVar8 = (long)(int)(iVar7 - 1U);
    puVar5 = *(undefined8 **)(piVar2 + 4);
    do {
      puVar10 = *(undefined8 **)(*(long *)(piVar2 + 2) + lVar8 * 8);
      lVar8 = lVar8 + 1;
      *puVar10 = puVar5;
      *(undefined8 **)(piVar2 + 4) = puVar10;
      puVar5 = puVar10;
    } while (lVar8 < iVar7);
    iVar9 = *piVar2;
    if (0 < iVar7) {
      uVar3 = iVar9 - iVar7;
      if (iVar7 <= iVar9) {
        if (uVar3 != 0 && iVar7 <= iVar9) {
          memmove((void *)(*(long *)(piVar2 + 2) + (ulong)(iVar7 - 1U) * 8),
                  (void *)(*(long *)(piVar2 + 2) + (long)iVar7 * 8),
                  -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
          iVar9 = *piVar2;
        }
        iVar9 = iVar9 + -1;
        *piVar2 = iVar9;
      }
    }
    iVar4 = piVar2[1];
  }
LAB_036a0a30:
  if (iVar9 < iVar4) {
    puVar5 = *(undefined8 **)(piVar2 + 4);
    *(undefined8 *)(piVar2 + 4) = *puVar5;
    *(undefined2 *)puVar5 = *(undefined2 *)param_2;
    *(undefined1 *)((long)puVar5 + 2) = *(undefined1 *)((long)param_2 + 2);
    *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)((long)puVar5 + 4) = param_2[1];
    iVar7 = *piVar2;
    if ((-1 < iVar7) && (iVar7 < piVar2[1])) {
      if (iVar7 != 0) {
        memmove((void *)((long)*(void **)(piVar2 + 2) + 8),*(void **)(piVar2 + 2),(long)iVar7 << 3);
      }
      **(undefined8 **)(piVar2 + 2) = puVar5;
      *piVar2 = *piVar2 + 1;
    }
  }
  return;
}

