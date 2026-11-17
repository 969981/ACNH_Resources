
/* WARNING: Removing unreachable block (ram,0x02b07d18) */
/* WARNING: Removing unreachable block (ram,0x02b07d08) */
/* WARNING: Removing unreachable block (ram,0x02b07da0) */

void FUN_02b07c84(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  *(undefined4 *)(param_1 + 0x300) = *param_2;
  *(undefined2 *)(param_1 + 0x304) = *(undefined2 *)(param_2 + 1);
  uVar4 = param_2[2];
  sVar3 = *(short *)PTR_DAT_04bb6298;
  *(uint *)(param_1 + 0x308) = uVar4;
  if (sVar3 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      puVar2 = &DAT_05636dd8;
      if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
        puVar2 = (undefined8 *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x148);
      }
      lVar5 = puVar2[1];
      if ((lVar5 != 0) &&
         (lVar6 = *(long *)(lVar5 + 0x48038), uVar4 < *(uint *)(lVar5 + 0x48030) && lVar6 != 0)) {
        if ((*(byte *)(lVar6 + (long)(int)uVar4 * 0x718 + 8) >> 1 & 1) == 0) {
          lVar5 = lVar6 + (long)(int)uVar4 * 0x718 + 0x90;
        }
        else {
          lVar5 = lVar6 + (long)(int)uVar4 * 0x718 + 0x2e0;
        }
        *(undefined4 *)(param_1 + 0x1a68) = *(undefined4 *)(lVar5 + 0x10);
        *(undefined4 *)(param_1 + 0x1a6c) = *(undefined4 *)(lVar5 + 0x14);
        *(undefined4 *)(param_1 + 0x1a78) = *(undefined4 *)(lVar5 + 0x20);
        *(undefined4 *)(param_1 + 0x1a7c) = *(undefined4 *)(lVar5 + 0x24);
      }
    }
  }
  return;
}

