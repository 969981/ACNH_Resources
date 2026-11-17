
/* WARNING: Removing unreachable block (ram,0x02e1dcb4) */
/* WARNING: Removing unreachable block (ram,0x02e1dc74) */
/* WARNING: Removing unreachable block (ram,0x02e1dc30) */
/* WARNING: Removing unreachable block (ram,0x02e1dc3c) */
/* WARNING: Removing unreachable block (ram,0x02e1dc48) */
/* WARNING: Removing unreachable block (ram,0x02e1dc5c) */
/* WARNING: Removing unreachable block (ram,0x02e1dc68) */
/* WARNING: Removing unreachable block (ram,0x02e1dc88) */
/* WARNING: Removing unreachable block (ram,0x02e1dc94) */
/* WARNING: Removing unreachable block (ram,0x02e1dca0) */
/* WARNING: Removing unreachable block (ram,0x02e1dcc0) */
/* WARNING: Removing unreachable block (ram,0x02e1dcd0) */

void FUN_02e1dad4(long param_1,byte param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb2230;
  lVar6 = *(long *)PTR_DAT_04bb2230;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x28);
  }
  *(undefined4 *)(lVar7 + 0x40) = 0x4c7b0100;
  *(undefined1 *)(lVar7 + 0x44) = 0;
  *(undefined4 *)(lVar7 + 0x48) = 1;
  *(undefined1 *)(lVar7 + 0x4c) = 0;
  *(undefined2 *)(lVar7 + 0x45) = 1;
  *(undefined1 *)(lVar7 + 0x47) = 0;
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0x28);
  }
  *(undefined4 *)(lVar7 + 0x1f3c) = 0;
  *(undefined2 *)(lVar7 + 0x1f38) = 0x100;
  *(undefined1 *)(lVar7 + 0x1f3a) = 0;
  if (((param_2 & 1) == 0) && (*(int *)(param_1 + 0x228) == 0x46)) {
    return;
  }
  if (*(int *)(param_1 + 0x210) == -1) {
    lVar6 = FUN_02e1ddac(param_1);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x1fc) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x22c) = 0xff;
    return;
  }
  puVar3 = (undefined8 *)
           FUN_0339be20(*(undefined8 *)(*(long *)puVar1 + 0x10),*(int *)(param_1 + 0x210),
                        PTR_DAT_04bb32e0);
  if (puVar3 == (undefined8 *)0x0) {
LAB_02e1dbdc:
    if ((*(int *)(param_1 + 0x218) != 2) ||
       ((lVar6 = *(long *)(*(long *)puVar1 + 0x18), *(int *)(lVar6 + 0x30) == 2 &&
        (*(long *)(lVar6 + 0x38) == 0)))) {
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x22c) = 0xff;
      *(undefined4 *)(param_1 + 0x230) = 0;
      if (*(int *)(param_1 + 0x1b0) == 0) {
        return;
      }
      goto LAB_02e1dd34;
    }
  }
  else {
    if (((*PTR_DAT_04bb7c40 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb7c40), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb7c38 = PTR_DAT_04bb7c48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7c40);
    }
    uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb7c38);
    if ((uVar4 & 1) == 0) goto LAB_02e1dbdc;
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x22c) = 0xff;
  if (*(int *)(param_1 + 0x1b0) == 3) {
    return;
  }
  *(byte *)(param_1 + 0x234) = param_2 & 1;
  uVar5 = 3;
LAB_02e1dd34:
  if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
    *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = uVar5;
  }
  return;
}

