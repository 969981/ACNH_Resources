
void FUN_025c18e0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *local_70;
  char *pcStack_68;
  
  puVar3 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "SerialNumber";
  if (*(long *)(param_1 + 8) != 0) {
    local_70 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_70,*(undefined4 *)(param_2 + 2));
    pcStack_68 = "PageNum";
    if (*(long *)(param_1 + 8) != 0) {
      local_70 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_70,(long)*(int *)(param_2 + 1));
      local_70 = puVar3 + 0x10;
      pcStack_68 = "Page";
      uVar4 = 0;
      if (*(long *)(param_1 + 8) != 0) {
        uVar4 = FUN_02605660(*(long *)(param_1 + 8),&local_70,(long)*(int *)((long)param_2 + 0xc));
      }
      goto LAB_025c198c;
    }
  }
  uVar4 = 0;
  local_70 = puVar1;
LAB_025c198c:
  if (((uint *)*param_2 != (uint *)0x0) && (uVar6 = *(uint *)*param_2, 0 < (int)uVar6)) {
    uVar9 = (long)*(int *)((long)param_2 + 0xc) * 500;
    iVar8 = (int)uVar9;
    if (iVar8 < (int)uVar6) {
      uVar2 = iVar8 + 500U;
      if ((int)uVar6 <= (int)(iVar8 + 500U)) {
        uVar2 = uVar6;
      }
      if (iVar8 < (int)uVar2) {
        lVar10 = (long)*(int *)((long)param_2 + 0xc) * 4000;
        do {
          if (((uint)uVar9 < *(uint *)*param_2) &&
             (lVar5 = *(long *)(*(long *)((uint *)*param_2 + 2) + lVar10), lVar5 != 0)) {
            lVar11 = *(long *)(param_1 + 0x28);
            if ((*(long *)(lVar11 + 0x20) != 0) &&
               (uVar6 = *(uint *)(lVar11 + 0xc), (int)uVar6 < *(int *)(lVar11 + 8))) {
              if ((uVar6 < *(uint *)(lVar11 + 0x18)) &&
                 (lVar7 = *(long *)(*(long *)(lVar11 + 0x20) + (long)(int)uVar6 * 8), lVar7 != 0)) {
                FUN_0260bd80(uVar4,lVar7,lVar5,*(undefined4 *)(lVar5 + 8));
                lVar7 = *(long *)(lVar11 + 0x10);
                lVar5 = nn::prepo::Array::GetBuffer();
                uVar4 = 0;
                if (lVar5 != 0) {
                  uVar4 = nn::prepo::Array::Add((Struct *)(lVar7 + 8));
                }
                uVar6 = *(uint *)(lVar11 + 0xc);
              }
              *(uint *)(lVar11 + 0xc) = uVar6 + 1;
            }
          }
          uVar6 = (uint)uVar9 + 1;
          uVar9 = (ulong)uVar6;
          lVar10 = lVar10 + 8;
        } while (uVar2 != uVar6);
      }
    }
    nn::prepo::Array::GetSize();
    local_70 = puVar3 + 0x10;
    pcStack_68 = "ItemArray";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_70,
                   *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
    }
  }
  return;
}

