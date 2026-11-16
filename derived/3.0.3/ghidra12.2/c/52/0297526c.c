
void FUN_0297526c(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = *(long **)PTR_DAT_04bb47a8;
  if (plVar11 != (long *)0x0) {
    bVar5 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
      uVar9 = (long)(char)bVar5 & 0xffffffff;
      pbVar3 = pbVar1 + uVar9 * 0x80;
      if (7 < bVar5) {
        pbVar3 = pbVar1;
      }
      if ((*pbVar3 >> 3 & 1) != 0) {
        lVar6 = DAT_0537d558[2] + 0x108 + uVar9 * 0xc;
        if (0xb < bVar5) {
          lVar6 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar6 + 10) == '\0') goto LAB_029753b4;
      }
    }
    lVar6 = (long)(int)*(uint *)(param_1 + 0x2cc);
    if (*(uint *)(plVar11 + 1) <= *(uint *)(param_1 + 0x2cc) || plVar11[2] == 0) {
      lVar6 = 0;
    }
    puVar7 = (undefined8 *)(plVar11[2] + lVar6 * 0xc);
    *puVar7 = 0;
    *(undefined2 *)(puVar7 + 1) = 0xfffe;
    uVar4 = *(uint *)(param_1 + 0x2cc);
    if (*(uint *)(plVar11 + 1) <= uVar4) {
      uVar4 = 0;
    }
    puVar8 = (undefined8 *)(plVar11[2] + (long)(int)uVar4 * 0xc);
    *(undefined4 *)((long)puVar8 + 7) = *(undefined4 *)((long)puVar7 + 7);
    *puVar8 = 0;
    uVar4 = *(uint *)(param_1 + 0x2cc);
    uVar9 = (**(code **)(*plVar11 + 0x58))(plVar11);
    if ((uVar9 & 1) != 0) {
      uVar2 = uVar4;
      if (*(uint *)(plVar11 + 3) <= uVar4) {
        uVar2 = 0;
      }
      if (*(uint *)(plVar11 + 1) <= uVar4) {
        uVar4 = 0;
      }
      lVar6 = plVar11[4] + (long)(int)uVar2 * 0x20;
      plVar11 = (long *)(plVar11[2] + (long)(int)uVar4 * 0xc);
      if (*(long *)(lVar6 + 8) != *plVar11 || *(int *)(lVar6 + 0x10) != (int)plVar11[1]) {
        lVar10 = *plVar11;
        *(int *)(lVar6 + 0x10) = (int)plVar11[1];
        *(long *)(lVar6 + 8) = lVar10;
        *(undefined1 *)(lVar6 + 0x14) = 1;
      }
    }
  }
LAB_029753b4:
  *(byte *)(param_1 + 0x2d8) = *(byte *)(param_1 + 0x2d8) | 1;
  FUN_006fb3d0(param_1);
  return;
}

