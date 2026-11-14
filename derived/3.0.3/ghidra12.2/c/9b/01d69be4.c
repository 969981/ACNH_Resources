
void FUN_01d69be4(long param_1)

{
  undefined2 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined2 local_28;
  byte local_26;
  undefined4 local_24;
  
  plVar12 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
  uVar10 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12), plVar12 = DAT_0537d558, (uVar10 & 1) == 0))
  {
    if (*(char *)(param_1 + 0x1e2) == -1) {
      lVar11 = *DAT_0537d558;
      bVar9 = *(byte *)(lVar11 + 0x473);
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        pbVar2 = (byte *)(lVar11 + 0x48);
        pbVar3 = pbVar2 + ((long)(char)bVar9 & 0xffffffffU) * 0x80;
        if (7 < bVar9) {
          pbVar3 = pbVar2;
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar11 + 0x472) == bVar9)) {
          pbVar3 = pbVar2 + ((long)(char)bVar9 & 0xffffffffU) * 0x80;
          if (7 < bVar9) {
            pbVar3 = pbVar2;
          }
          if (((*pbVar3 >> 3 & 1) != 0) && (0 < *(int *)(param_1 + 0x1a8))) {
            iVar5 = *(int *)(param_1 + 0x1a4);
            iVar6 = *(int *)(param_1 + 0x1a0);
            iVar4 = 0;
            if (iVar6 <= iVar5) {
              iVar4 = iVar6;
            }
            puVar1 = (undefined2 *)(*(long *)(param_1 + 0x198) + (long)(iVar5 - iVar4) * 4);
            uVar8 = *puVar1;
            uVar7 = *(undefined1 *)(puVar1 + 1);
            *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + -1;
            *(undefined1 *)(param_1 + 0x1e2) = uVar7;
            *(undefined2 *)(param_1 + 0x1e0) = uVar8;
            iVar4 = 0;
            if (iVar5 + 1 < iVar6) {
              iVar4 = iVar5 + 1;
            }
            *(int *)(param_1 + 0x1a4) = iVar4;
            local_26 = *(byte *)(param_1 + 0x1e2);
            if ((long)(char)local_26 != 0xffffffffffffffff) {
              pbVar2 = (byte *)(*plVar12 + 0x48) + ((long)(char)local_26 & 0xffffffffU) * 0x80;
              if (7 < local_26) {
                pbVar2 = (byte *)(*plVar12 + 0x48);
              }
              if ((*pbVar2 >> 1 & 1) != 0) {
                local_28 = *(undefined2 *)(param_1 + 0x1e0);
                local_24 = 1;
                FUN_01de7124(param_1,&local_28,8);
              }
            }
          }
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x1f9) != '\0') {
    FUN_01d6a464(param_1);
    *(undefined1 *)(param_1 + 0x1fb) = 1;
  }
  return;
}

