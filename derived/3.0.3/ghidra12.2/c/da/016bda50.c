
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bda50(long param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined4 uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  
  sVar2 = *(short *)PTR_DAT_04bc39f0;
  if (sVar2 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) >> 1 & 1) != 0) {
      return;
    }
  }
  uVar4 = FUN_0290d828();
  if ((((uVar4 & 1) == 0) && (*(int *)(PTR_DAT_04bc3a88 + 0x38) != -0x6d41fcf3)) &&
     ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    *(undefined1 *)(param_1 + 0x54) = 0;
    uVar3 = _DAT_05586008;
    *(undefined4 *)(param_1 + 0x50) = DAT_0558600c;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    if (0 < *(int *)(param_1 + 0xa0)) {
      lVar6 = 0;
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0xa8) + lVar6 * 8);
        if (*(char *)((long)puVar7 + 2) != '\0') {
          *(undefined1 *)((long)puVar7 + 2) = 0;
        }
        lVar6 = lVar6 + 1;
        *puVar7 = *(undefined8 *)(param_1 + 0xb0);
        *(undefined8 **)(param_1 + 0xb0) = puVar7;
      } while (lVar6 < *(int *)(param_1 + 0xa0));
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    pvVar5 = (void *)(**(code **)(*(long *)(param_1 + 0x1d60) + 0x18))(param_1 + 0x1d60);
    memset(pvVar5,0,0x754);
    pvVar5 = (void *)(**(code **)(*(long *)(param_1 + 0xe80) + 0x18))(param_1 + 0xe80);
    memset(pvVar5,0,0x754);
    pvVar5 = (void *)(**(code **)(*(long *)(param_1 + 0x15f0) + 0x18))(param_1 + 0x15f0);
    memset(pvVar5,0,0x754);
    **(undefined1 **)(param_1 + 0x60) = 0;
    **(undefined1 **)(param_1 + 0x80) = 0;
  }
  return;
}

