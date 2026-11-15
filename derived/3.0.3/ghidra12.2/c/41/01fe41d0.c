
void FUN_01fe41d0(long param_1,undefined4 *param_2)

{
  undefined8 *__src;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 *__dest;
  
  if (*(int *)(param_1 + 0x123c0) == 0) {
    piVar5 = (int *)PTR_DAT_04bb3238;
  }
  else {
    piVar5 = (int *)**(undefined8 **)(param_1 + 0x123c8);
  }
  uVar4 = 0x59;
  if (*piVar5 == 0) {
    uVar4 = 1;
  }
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  param_2[0x19] = 1;
  lVar7 = *(long *)PTR_DAT_04bb4960;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(param_1 + 0x123bc);
    if ((int)*(uint *)(lVar7 + 0x5c0) < 1) {
      if (*(long *)(lVar7 + 0x4b0) == 0) {
        return;
      }
      puVar12 = *(uint **)(*(long *)(lVar7 + 0x4b0) + 8);
      if (puVar12 == (uint *)0x0) {
        return;
      }
      if ((uVar1 < *(uint *)(lVar7 + 0x4c8)) &&
         (*(char *)(*(long *)(lVar7 + 0x4d0) + (long)(int)uVar1) == '\0')) {
        return;
      }
      if (*puVar12 <= uVar1) {
        return;
      }
      if (puVar12[1] == 0) {
        return;
      }
      if ((ushort)puVar12[2] == 0) {
        return;
      }
      iVar6 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar12 = (uint *)((ulong)(puVar12[1] * uVar1 + (uint)(ushort)puVar12[2] * 8 + iVar6) +
                        (long)puVar12);
    }
    else {
      if (*(uint *)(lVar7 + 0x5c0) <= uVar1) {
        return;
      }
      if (*(uint *)(lVar7 + 0x5b0) <= uVar1) {
        uVar1 = 0;
      }
      puVar12 = *(uint **)(*(long *)(lVar7 + 0x5b8) + (ulong)uVar1 * 8);
    }
    if (puVar12 != (uint *)0x0) {
      FUN_01fe32b0(param_1,param_2 + 0x37,(uint *)(param_1 + 0x123bc));
      puVar3 = PTR_DAT_04bc23c8;
      puVar2 = PTR_DAT_04bc23c0;
      if (*puVar12 != 0) {
        cVar8 = *PTR_DAT_04bc23c0;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar3 + 0x34);
            if (-1 < (int)uVar1) {
              puVar10 = (undefined8 *)((ulong)uVar1 + (long)puVar12);
              goto LAB_01fe4358;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)*puVar12;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar12 == 0) || (puVar12 == puVar11)) goto LAB_01fe4358;
          lVar7 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar11)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar12 + (lVar7 - (long)puVar11);
          if (lVar7 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar11));
          *(undefined4 *)(puVar3 + 0x34) = 0xfffffffe;
          puVar10 = (undefined8 *)0x0;
          if (uVar9 == 0) goto LAB_01fe4358;
          piVar5 = (int *)(lVar7 + 4);
          while (piVar5[-1] != 0x6c6fdb31) {
            piVar5 = piVar5 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01fe4358;
            }
          }
          iVar6 = 0;
          if (*piVar5 != -1) {
            iVar6 = *piVar5;
          }
          *(int *)(puVar3 + 0x34) = iVar6;
        } while (*puVar12 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01fe4358:
      __dest = *(undefined8 **)(param_2 + 0x46);
      __src = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        __src = puVar10;
      }
      if (__dest != __src) {
        lVar7 = 0;
        do {
          if (*(char *)((long)__src + lVar7) == '\0') goto LAB_01fe442c;
          if (*(char *)((long)__src + lVar7 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_01fe442c;
          }
          if (*(char *)((long)__src + lVar7 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_01fe442c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_01fe442c:
        iVar6 = (int)lVar7;
        if ((int)param_2[0x48] <= (int)lVar7) {
          iVar6 = param_2[0x48] + -1;
        }
        memcpy(__dest,__src,(long)iVar6);
        *(undefined1 *)((long)__dest + (long)iVar6) = 0;
      }
      *(long *)(param_1 + 0x12478) = param_1;
      *(code **)(param_1 + 0x12480) = FUN_01fde1f0;
      *(undefined8 *)(param_1 + 0x12488) = 0;
      *(long *)(param_2 + 2) = param_1 + 0x12470;
      *(long *)(param_1 + 0x12458) = param_1;
      *(undefined1 **)(param_1 + 0x12460) = &LAB_01fe36c0;
      *(undefined8 *)(param_1 + 0x12468) = 0;
      *(long *)(param_2 + 4) = param_1 + 0x12450;
      *(long *)(param_1 + 0x12438) = param_1;
      *(undefined1 **)(param_1 + 0x12440) = &LAB_01fdeb2c;
      *(undefined8 *)(param_1 + 0x12448) = 0;
      *(long *)(param_2 + 8) = param_1 + 0x12430;
    }
  }
  return;
}

