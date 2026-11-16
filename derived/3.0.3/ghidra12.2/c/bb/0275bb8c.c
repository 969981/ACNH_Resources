
void FUN_0275bb8c(long param_1)

{
  long lVar1;
  byte *pbVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar6 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0), lVar6 != 0)) {
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    lVar1 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
    uVar8 = (uint)*(byte *)(lVar1 + 0x1341c);
    if (uVar8 - 1 < 0xc) {
      bVar3 = (byte)(*(char *)(lVar1 + 0x1341d) - 1U) < (byte)(&DAT_0417b531)[uVar8 - 1];
    }
    else {
      bVar3 = false;
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (bVar3) {
      if ((*(long **)(lVar6 + 0x18390) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x18390), puVar7 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar7)();
        uVar5 = uVar5 ^ 1;
      }
      pbVar2 = (byte *)(*(long *)(lVar6 + 0x18378) + *(long *)(lVar6 + 0x18370));
      uVar8 = (uint)*pbVar2;
      if ((0xb < uVar8 - 1) || ((byte)(&DAT_0417b531)[uVar8 - 1] <= (byte)(pbVar2[1] - 1))) {
        uVar8 = 1;
      }
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x18390) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x18390) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      goto LAB_0275bccc;
    }
  }
  uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  uVar8 = (int)((ulong)uVar5 * 0xc >> 0x20) + 1;
  DAT_05582b7c = uVar5;
LAB_0275bccc:
  uVar4 = FUN_0275b218(param_1,uVar8,0xffffffff,0xffffffff,0xffffffff);
  *(undefined1 *)(param_1 + 0x925) = uVar4;
  uVar4 = FUN_0275b218(param_1,(*(int *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) << 8) >> 0x18,uVar4,
                       0xffffffff,0xffffffff);
  *(undefined1 *)(param_1 + 0x924) = uVar4;
  return;
}

