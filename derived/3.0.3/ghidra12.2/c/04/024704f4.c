
/* WARNING: Removing unreachable block (ram,0x02470548) */

void FUN_024704f4(long param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  byte bVar4;
  float fVar5;
  undefined4 local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  undefined4 local_38;
  undefined1 local_34;
  
  fVar5 = -20.0;
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar3 != 0)) {
    local_48 = 0;
    lVar3 = *(long *)(lVar3 + 0x118);
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x280);
      fVar5 = 0.0;
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 8), lVar3 != 0)) {
        pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x488) + 0xf0))(lVar3 + 0x488);
        fVar5 = *pfVar2;
      }
      lVar3 = FUN_0251e98c(1);
      pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x1560) + 0xf0))(lVar3 + 0x1560);
      fVar5 = fVar5 + *pfVar2;
    }
  }
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar1 + 0x27c) = fVar5;
  *(undefined4 *)(param_1 + 0x3a0) = 10;
  *(undefined8 *)(param_1 + 0x398) = 0;
  local_38 = 0x3e99999a;
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  fStack_40 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  bVar4 = *(byte *)(param_1 + 0x1ee8);
  local_44 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_3c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  local_48 = CONCAT31(local_48._1_3_,bVar4);
  local_34 = 1;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_48,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

