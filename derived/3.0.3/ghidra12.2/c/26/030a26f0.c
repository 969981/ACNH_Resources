
void FUN_030a26f0(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  short *psVar7;
  long lVar8;
  undefined *local_58;
  short local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  long local_48;
  
  psVar7 = (short *)(param_1 + 8);
  *psVar7 = *(short *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar4 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar6 = puVar5;
      *(undefined8 **)(param_1 + 0x20) = puVar6;
      puVar5 = puVar6;
    } while (lVar4 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar1 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(psVar7);
  lVar4 = *(long *)puVar1;
  if (lVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (local_50 = *psVar7,
       *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0 && local_50 != -2)) {
      local_4e = *(undefined2 *)(param_1 + 10);
      local_48 = 0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_4c = *(undefined4 *)(param_1 + 0xc);
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar4 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(psVar7);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
            local_48 = lVar4;
          }
        }
      }
      iVar3 = FUN_01ad7260(&local_58);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x10)) {
          return;
        }
      }
      else {
        FUN_030a2910(param_1);
        if (*(int *)(param_1 + 0x10) != 0) {
          return;
        }
        if (*(int *)(param_1 + 0x14) < 1) {
          return;
        }
      }
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = *puVar5;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)(param_1 + 8);
      *(undefined1 *)((long)puVar5 + 2) = *(undefined1 *)(param_1 + 10);
      *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(param_1 + 0xb);
      *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = puVar5;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
  }
  return;
}

