
void FUN_0229890c(long *param_1)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte local_34 [4];
  
  if ((*(uint *)(param_1 + 0x52) & 0xfffffffd) == 4) {
    (**(code **)(*param_1 + 0x198))();
    local_34[0] = *(byte *)(param_1 + 0x6b);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    uVar2 = *(ushort *)((long)param_1 + 0x284);
    if (uVar2 < 1000) {
      if ((DAT_04c47dc0 < (short)uVar2) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar2 & 0xffffffffU) * 0x10) == 0)) {
        uVar3 = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar2 * 0x10 + 8);
      }
      FUN_00a77b40(local_34,uVar3);
    }
    puVar4 = (undefined8 *)param_1[0x55];
    *(undefined4 *)(param_1 + 0x52) = 0;
    if (puVar4 != &DAT_0407ebb1) {
      iVar1 = 0;
      if ((int)param_1[0x56] < 1) {
        iVar1 = (int)param_1[0x56] + -1;
      }
      memset(puVar4,0,(long)iVar1);
      *(undefined1 *)((long)puVar4 + (long)iVar1) = 0;
    }
    puVar4 = (undefined8 *)param_1[0x60];
    if (puVar4 != &DAT_0407ebb1) {
      iVar1 = 0;
      if ((int)param_1[0x61] < 1) {
        iVar1 = (int)param_1[0x61] + -1;
      }
      memset(puVar4,0,(long)iVar1);
      *(undefined1 *)((long)puVar4 + (long)iVar1) = 0;
    }
    param_1[0x6a] = 0;
    param_1[0x6c] = 0;
    *(undefined2 *)(param_1 + 0x6b) = 0xff;
  }
  return;
}

