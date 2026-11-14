
void FUN_01d95994(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x110) == 4) {
      if (DAT_05739190 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(DAT_05739190 + 0x28);
      }
      if (*(char *)(lVar8 + 0x2080) == '\0') {
        bVar4 = 1;
      }
      else {
        bVar4 = (**(code **)(*(long *)(lVar8 + 0x2078) + 0x18))(lVar8 + 0x2078);
        *(char *)(lVar8 + 0x2080) = '\0';
      }
      *(byte *)(lVar8 + 0x2081) = bVar4 & 1;
      plVar7 = (long *)(lVar8 + 0x2088);
      goto LAB_01d95a88;
    }
    if (*(int *)(param_1 + 0x110) == 3) {
      puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar1 = *puVar5 ^ *puVar5 << 0xb;
      uVar2 = puVar5[3];
      uVar3 = **(uint **)(param_1 + 8);
      *puVar5 = puVar5[1];
      puVar5[1] = puVar5[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1;
      plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 8) +
                         ((long)((ulong)uVar3 * (ulong)uVar1) >> 0x20) * 8);
      goto LAB_01d95a88;
    }
  }
  plVar7 = (long *)(param_1 + 0x108);
LAB_01d95a88:
  if (((*(int *)(param_1 + 0x60) == 2) && (lVar8 = *plVar7, lVar8 != 0)) &&
     (uVar6 = FUN_01d9d794(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 8),param_2,lVar8,
                           param_1 + 0x110,param_3,0), (uVar6 & 1) != 0)) {
    *(long *)(param_1 + 0x118) = lVar8;
    *(undefined1 *)(param_1 + 0x12e) = 1;
  }
  else if (param_3 != 0) {
    *(undefined8 *)(param_3 + 8) = 0x32ffffffff;
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  return;
}

