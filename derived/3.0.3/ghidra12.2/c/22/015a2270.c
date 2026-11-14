
void FUN_015a2270(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  size_t __n;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  char *__s;
  undefined2 *puVar14;
  undefined *local_50;
  undefined8 uStack_48;
  
  puVar6 = PTR_DAT_04bb2cd8;
  if (*(long *)(param_1 + 0x390) == 0) {
    return;
  }
  if ((param_3 & 1) != 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x4030);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    FUN_01596474(param_1,*(undefined4 *)(param_2 + 0x4038),*(undefined4 *)(param_2 + 0x403c),
                 &local_50);
    lVar7 = 0;
    if (*(long *)(param_1 + 0x390) == 0) goto LAB_015a22e0;
  }
  lVar7 = (**(code **)puVar6)();
LAB_015a22e0:
  FUN_015a4250(lVar7 + (ulong)*(uint *)(param_1 + 0x388),param_2 + 0x10,
               *(undefined4 *)(param_2 + 0x4038),*(undefined4 *)(param_2 + 0x403c));
  iVar8 = *(int *)(param_2 + 0x4044);
  local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar8);
  if (iVar8 != 1) {
    lVar7 = 0;
    if (*(long *)(param_1 + 0x390) != 0) {
      lVar7 = (**(code **)puVar6)();
      iVar8 = *(int *)(param_2 + 0x4044);
    }
    if (iVar8 != 1) {
      uVar3 = *(ushort *)(param_1 + 0x42);
      uVar12 = (uint)uVar3;
      if (*(short *)(param_1 + 0x4a) != 3) {
        uVar12 = 1;
      }
      uVar11 = (uint)*(ushort *)(param_1 + 0x40);
      if (*(ushort *)(param_1 + 0x40) < 2) {
        uVar11 = 1;
      }
      if (uVar12 == uVar3 || uVar12 < uVar3) {
        uVar12 = (uint)uVar3;
      }
      if ((iVar8 == 0) && (uVar12 * uVar11 == 0x10000)) {
        uVar12 = *(uint *)(param_1 + 0x388);
        lVar9 = 0;
        do {
          puVar2 = (undefined4 *)((ulong)uVar12 + lVar7 + 0x29800 + lVar9);
          lVar9 = lVar9 + 8;
          puVar2[0x100] = puVar2[0x200];
          puVar2[0x101] = puVar2[0x201];
          *puVar2 = puVar2[0x200];
          puVar2[1] = puVar2[0x201];
        } while (lVar9 != 0x400);
      }
    }
  }
  __s = *(char **)(param_1 + 0xa0);
  puVar14 = *(undefined2 **)(param_1 + 0x118);
  if (__s == (char *)0x0) {
    __n = 0;
    uVar10 = 0;
    *puVar14 = 0;
  }
  else {
    __n = strlen(__s);
    *puVar14 = (short)__n;
    if (__n == 0) {
      uVar10 = 0;
    }
    else {
      memmove(puVar14 + 1,__s,__n);
      uVar10 = __n & 0xffff;
    }
  }
  uVar12 = (uint)__n;
  if (0 < (int)(((uVar12 & 0xfffffffe) - (uVar12 & 0xffff)) + 2)) {
    memset((void *)((long)puVar14 + uVar10 + 2),0,(ulong)((uVar12 | 1) - (uVar12 & 0xffff)) + 1);
  }
  piVar13 = (int *)(param_1 + 0x60);
  if (*piVar13 == -1) {
    lVar7 = -1;
  }
  else {
    uVar12 = *piVar13 - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
    if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar12) {
      uVar12 = 0;
    }
    puVar1 = (uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar12 * 0x20 + 4);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar7 = (long)*piVar13;
  }
  *(long *)(param_1 + 0x148) = lVar7;
  *(long *)(param_1 + 0x380) = param_1 + 0xb8;
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x417) = *(undefined8 *)(param_1 + 0x57);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x40);
  FUN_038fd1e0(param_1 + 0x420);
  FUN_038fd2f0(param_1 + 0x420,piVar13);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0xa8);
  puVar1 = (uint *)(param_1 + 0x4a4);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined2 *)(param_1 + 0x497) = 0x101;
  *(undefined1 *)(param_1 + 0x499) = 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined2 *)(param_1 + 0x494) = 0;
  *(undefined1 *)(param_1 + 0x496) = 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(ushort *)(param_1 + 0x4b0) =
       *(ushort *)(param_2 + 0x4050) >> 1 & 0x20 | *(ushort *)(param_1 + 0x4b0) & 0xffdf | 1;
  return;
}

