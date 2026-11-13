
void FUN_013f4bc0(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                 uint param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  void *__s;
  long lVar9;
  byte bVar10;
  uint *puVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  uint local_870 [2];
  undefined8 local_868;
  undefined8 *local_860;
  long *local_858;
  long *local_850;
  long local_848 [4];
  long local_828 [2];
  undefined1 auStack_818 [1296];
  undefined8 local_308;
  undefined8 local_2f8 [85];
  
  if (param_2 != (long *)0x0) {
    __s = (void *)(**(code **)(*param_2 + 0x18))(param_2);
    memset(__s,0,0x754);
    local_858 = local_848;
    local_868 = 0;
    local_860 = (undefined8 *)0x0;
    lVar15 = 0;
    do {
      lVar9 = lVar15 + 0x30;
      plVar13 = (long *)((long)local_848 + lVar15 + 0x10);
      *plVar13 = (long)local_828 + lVar15;
      *(long **)((long)local_848 + lVar15) = plVar13;
      *(undefined1 **)((long)local_828 + lVar15) = auStack_818 + lVar15;
      lVar15 = lVar9;
    } while (lVar9 != 0x540);
    local_308 = 0;
    if (local_2f8 != (undefined8 *)0x0) {
      local_868 = 0x5500000000;
      local_860 = local_2f8;
    }
    local_850 = local_858;
    FUN_013fbd10(param_1,&local_868,param_3,param_4,param_5,param_6 & 1);
    bVar10 = *(byte *)(param_3 + 4);
    if (*(byte *)(param_4 + 4) < bVar10) {
      uVar12 = 0;
    }
    else {
      uVar8 = (uint)bVar10;
      if (uVar8 - 4 < 5) {
        uVar8 = 0;
      }
      else if (uVar8 - 9 < 7) {
        uVar8 = 1;
      }
      else {
        uVar8 = (uint)(4 < uVar8 - 0x10) << 1;
      }
      uVar12 = 1 << (ulong)uVar8;
      if (2 < uVar8) {
        uVar12 = 0;
      }
      uVar8 = uVar12;
      do {
        bVar3 = bVar10 - 0x10;
        bVar4 = bVar10 - 9;
        bVar5 = bVar10 - 4;
        bVar10 = bVar10 + 1;
        uVar2 = 1;
        if (6 < bVar4) {
          uVar2 = (uint)(4 < bVar3) << 1;
        }
        uVar1 = 0;
        if (4 < bVar5) {
          uVar1 = uVar2;
        }
        uVar2 = uVar8 | 1 << (ulong)uVar1;
        uVar7 = uVar2;
        if (2 < uVar1) {
          uVar2 = uVar8;
          uVar7 = uVar12;
        }
        uVar12 = uVar7;
        uVar8 = uVar2;
      } while (bVar10 <= *(byte *)(param_4 + 4));
      uVar12 = uVar12 & 0xff;
    }
    if ((int)local_868 != 0) {
      if ((param_7 & 1) == 0) {
        lVar15 = (long)(int)local_868 << 3;
        puVar14 = local_860;
        do {
          puVar11 = (uint *)*puVar14;
          if (((((uVar12 & 1) != 0) && ((puVar11[1] & 1) != 0)) ||
              (((uVar12 >> 1 & 1) != 0 && (((byte)puVar11[1] >> 1 & 1) != 0)))) ||
             (((uVar12 >> 2 & 1) != 0 && (((byte)puVar11[1] >> 2 & 1) != 0)))) {
            local_870[1] = 0;
            local_870[0] = *puVar11 & 0xffff;
            FUN_0277d4ac(local_870);
            FUN_0277dedc(local_870);
            lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
            uVar8 = FUN_0277d6c4(local_870);
            if ((uVar8 >> 3 & 0x1fff) < 0x753) {
              lVar6 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
              *(uint *)(lVar9 + lVar6) = *(uint *)(lVar9 + lVar6) | 1 << (ulong)(uVar8 & 0x1f);
            }
          }
          puVar14 = puVar14 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      else {
        lVar15 = (long)(int)local_868 << 3;
        puVar14 = local_860;
        do {
          if (*(char *)((long)*puVar14 + 0xd) != '\0') {
            local_870[1] = 0;
            local_870[0] = *(uint *)*puVar14 & 0xffff;
            FUN_0277d4ac(local_870);
            FUN_0277dedc(local_870);
            lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
            uVar8 = FUN_0277d6c4(local_870);
            if ((uVar8 >> 3 & 0x1fff) < 0x753) {
              lVar6 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
              *(uint *)(lVar9 + lVar6) = *(uint *)(lVar9 + lVar6) | 1 << (ulong)(uVar8 & 0x1f);
            }
          }
          puVar14 = puVar14 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
    }
  }
  return;
}

