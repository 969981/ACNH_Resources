
void FUN_01d6a1dc(long param_1)

{
  uint *puVar1;
  byte *pbVar2;
  short *psVar3;
  undefined2 uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  char local_48 [4];
  byte local_44 [4];
  
  if (*(char *)(param_1 + 0x1fa) == '\0') {
    nn::os::ClearEvent((EventType *)(param_1 + 0x90));
  }
  else {
    nn::os::WaitEvent((EventType *)(param_1 + 0x90));
  }
  lVar9 = *DAT_0537d558;
  bVar5 = *(byte *)(lVar9 + 0x473);
  pbVar8 = PTR_DAT_04bc1220;
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
    if (7 < bVar5) {
      puVar1 = (uint *)(lVar9 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x473);
    }
  }
  bVar5 = *pbVar8;
  uVar4 = *(undefined2 *)PTR_DAT_04bb6298;
  if (*(char *)(param_1 + 0x1fb) == '\0') {
    plVar10 = *(long **)(DAT_05ae6a60 + 0x30);
    uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10);
    if (((uVar7 & 1) == 0) && (uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10), (uVar7 & 1) == 0)) {
      lVar9 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar9 + 0x472);
      if ((long)(char)bVar6 != 0xffffffffffffffff) {
        pbVar8 = (byte *)(lVar9 + 0x48);
        pbVar2 = pbVar8 + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
        if (7 < bVar6) {
          pbVar2 = pbVar8;
        }
        if ((*pbVar2 >> 1 & 1) != 0) {
          bVar6 = *(byte *)(lVar9 + 0x473);
          if ((long)(char)bVar6 != 0xffffffffffffffff) {
            pbVar2 = pbVar8 + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
            if (7 < bVar6) {
              pbVar2 = pbVar8;
            }
            if (((*pbVar2 >> 3 & 1) != 0) &&
               (FUN_01d6915c(local_48,param_1,uVar4), local_48[0] != -1)) {
              psVar3 = (short *)(param_1 + 0x108) + (ulong)(uint)(int)(char)bVar5 * 6;
              if (0xb < bVar5) {
                psVar3 = (short *)(param_1 + 0x108);
              }
              if (*psVar3 != -1) {
                return;
              }
            }
          }
        }
      }
    }
  }
  if ((uint)(int)(char)bVar5 < 8) {
    lVar11 = *(long *)PTR_DAT_04bb32e8;
    FUN_01d6915c(local_44,param_1,uVar4);
    lVar9 = param_1 + (ulong)bVar5 * 0xc;
    bVar6 = *PTR_DAT_04bb5018;
    *(undefined8 *)(lVar9 + 0x10a) = *(undefined8 *)(lVar11 + 0x4060);
    *(undefined2 *)(lVar9 + 0x108) = uVar4;
    *(bool *)(lVar9 + 0x112) = local_44[0] == bVar5 || local_44[0] == bVar6;
    FUN_01d6aa30(param_1);
  }
  return;
}

