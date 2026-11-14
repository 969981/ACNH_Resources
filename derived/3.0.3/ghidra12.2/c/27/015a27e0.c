
void FUN_015a27e0(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  char *__s;
  undefined2 *puVar8;
  undefined *local_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x390) == 0) {
    return;
  }
  if ((param_3 & 1) != 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x4030);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    FUN_01596594(param_1,*(undefined4 *)(param_2 + 0x4038),*(undefined4 *)(param_2 + 0x403c),
                 &local_50);
    if (*(long *)(param_1 + 0x390) == 0) {
      lVar5 = 0;
      goto LAB_015a285c;
    }
  }
  lVar5 = (*DAT_04c61fd0)();
LAB_015a285c:
  memcpy((void *)(lVar5 + (ulong)*(uint *)(param_1 + 0x388)),(void *)(param_2 + 0x10),
         (ulong)*(uint *)(param_1 + 0x50));
  __s = *(char **)(param_1 + 0xa0);
  puVar8 = *(undefined2 **)(param_1 + 0x118);
  if (__s == (char *)0x0) {
    __n = 0;
    uVar4 = 0;
    *puVar8 = 0;
  }
  else {
    __n = strlen(__s);
    *puVar8 = (short)__n;
    if (__n == 0) {
      uVar4 = 0;
    }
    else {
      memmove(puVar8 + 1,__s,__n);
      uVar4 = __n & 0xffff;
    }
  }
  uVar6 = (uint)__n;
  if (0 < (int)(((uVar6 & 0xfffffffe) - (uVar6 & 0xffff)) + 2)) {
    memset((void *)((long)puVar8 + uVar4 + 2),0,(ulong)((uVar6 | 1) - (uVar6 & 0xffff)) + 1);
  }
  piVar7 = (int *)(param_1 + 0x60);
  if (*piVar7 == -1) {
    lVar5 = -1;
  }
  else {
    uVar6 = *piVar7 - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
    if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar6) {
      uVar6 = 0;
    }
    puVar1 = (uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar6 * 0x20 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = (long)*piVar7;
  }
  *(long *)(param_1 + 0x148) = lVar5;
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
  FUN_038fd2f0(param_1 + 0x420,piVar7);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0xa8);
  puVar1 = (uint *)(param_1 + 0x4a4);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined2 *)(param_1 + 0x497) = 0x101;
  *(undefined1 *)(param_1 + 0x499) = 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(ushort *)(param_1 + 0x4b0) =
       *(ushort *)(param_2 + 0x4050) >> 1 & 0x20 | *(ushort *)(param_1 + 0x4b0) & 0xffdf | 1;
  return;
}

