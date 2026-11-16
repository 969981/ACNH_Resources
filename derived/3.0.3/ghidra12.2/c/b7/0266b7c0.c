
bool FUN_0266b7c0(undefined4 param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar3 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_1), lVar3 == 0)) {
    bVar5 = true;
  }
  else {
    if ((*(long **)(lVar3 + 0x161a8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x161a8), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    pbVar1 = (byte *)(*(long *)(lVar3 + 0x16190) + *(long *)(lVar3 + 0x16188));
    bVar5 = pbVar1[1] != 0 && *pbVar1 < 8;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x161a8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x161a8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return bVar5;
}

