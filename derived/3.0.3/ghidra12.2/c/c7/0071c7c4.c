
void FUN_0071c7c4(long *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x100;
  *(undefined1 *)((long)param_1 + 10) = 0;
  *(byte *)((long)param_1 + 0xb) = param_3;
  puVar2 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    *(undefined1 *)((long)param_1 + 9) = 0;
    return;
  }
  uVar1 = *param_2;
  if ((((uVar1 == 0) ||
       (lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                         ((ulong)(uVar1 >> 0x11) & 0x7ff8)), lVar6 == 0)) ||
      (((param_3 & 1) == 0 && ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)))) ||
     (*(uint *)(lVar6 + 0x230) != uVar1)) {
    lVar6 = 0;
  }
  *param_1 = lVar6;
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar5 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if ((iVar3 < 0x11) ||
       (*(uint *)(lVar5 + 0x5e8) < 5 && (1 << (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 0x1aU) != 0
       )) goto LAB_0071c898;
  }
  *(undefined1 *)((long)param_1 + 9) = 0;
LAB_0071c898:
  lVar5 = *param_1;
  if (lVar5 != 0) {
    *(bool *)(param_1 + 1) = *(int *)(lVar5 + 0x150) == 1;
    *(byte *)((long)param_1 + 10) = (byte)(*(uint *)(lVar5 + 0x248) >> 4) & 1;
  }
  return;
}

