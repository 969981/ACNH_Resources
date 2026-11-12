
void FUN_0071cb58(long *param_1,uint *param_2,uint *param_3,byte param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 10) = 1;
  *(byte *)((long)param_1 + 0xb) = param_4;
  puVar2 = PTR_DAT_04bb27c0;
  if (*(long *)PTR_DAT_04bb27c0 == 0) {
LAB_0071ccb4:
    *(undefined1 *)((long)param_1 + 10) = 0;
  }
  else {
    uVar1 = *param_2;
    if ((((uVar1 == 0) ||
         (lVar5 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), lVar5 == 0)) ||
        (((param_4 & 1) == 0 && ((*(uint *)(lVar5 + 0x248) >> 1 & 1) != 0)))) ||
       (*(uint *)(lVar5 + 0x230) != uVar1)) {
      lVar5 = 0;
    }
    *param_1 = lVar5;
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar5 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if ((iVar3 < 0x11) ||
       (uVar1 = *(uint *)(lVar5 + 0x5e8), uVar1 < 5 && (1 << (ulong)(uVar1 & 0x1f) & 0x1aU) != 0)) {
      lVar5 = *param_1;
      if (lVar5 == 0) {
        return;
      }
      lVar6 = *(long *)puVar2;
      iVar3 = *(int *)(lVar6 + 0x288);
      if ((iVar3 != -1 && iVar3 != 1) &&
         ((((uVar1 = *param_3, uVar1 == 0 ||
            (lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                              ((ulong)(uVar1 >> 0x11) & 0x7ff8)), lVar6 == 0)) ||
           ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)) ||
          ((*(uint *)(lVar6 + 0x230) != uVar1 ||
           ((*param_2 != uVar1 && (*(int *)(lVar6 + 0x24c) == *(int *)(lVar5 + 0x24c)))))))))
      goto LAB_0071ccb4;
    }
    else {
      lVar5 = *param_1;
      *(undefined1 *)((long)param_1 + 10) = 0;
      if (lVar5 == 0) {
        return;
      }
    }
    *(bool *)(param_1 + 1) = *(int *)(lVar5 + 0x150) == 1;
    *(byte *)((long)param_1 + 9) = (byte)(*(uint *)(lVar5 + 0x248) >> 4) & 1;
  }
  return;
}

