
/* WARNING: Removing unreachable block (ram,0x03008e64) */
/* WARNING: Removing unreachable block (ram,0x03008e1c) */
/* WARNING: Removing unreachable block (ram,0x03008dd0) */
/* WARNING: Removing unreachable block (ram,0x03008df4) */
/* WARNING: Removing unreachable block (ram,0x03008e40) */
/* WARNING: Removing unreachable block (ram,0x03008e84) */

void FUN_03008d90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x210);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x598);
    lVar3 = *(long *)(lVar2 + 0x5a0);
    lVar2 = *(long *)(lVar2 + 0x5a8);
    *(long *)(param_1 + 0x230) = lVar1;
    *(undefined8 *)(*(long *)(lVar2 + 0x218) + 0x1460) = *(undefined8 *)(lVar3 + 0x218);
    *(undefined8 *)(*(long *)(lVar3 + 0x218) + 0x1460) = *(undefined8 *)(lVar1 + 0x218);
    *(undefined8 *)(*(long *)(lVar1 + 0x218) + 0x1460) = *(undefined8 *)(lVar2 + 0x218);
    *(undefined8 *)(*(long *)(lVar1 + 0x218) + 0x1468) = *(undefined8 *)(lVar3 + 0x218);
    *(undefined8 *)(*(long *)(lVar3 + 0x218) + 0x1468) = *(undefined8 *)(lVar2 + 0x218);
    *(undefined8 *)(*(long *)(lVar2 + 0x218) + 0x1468) = *(undefined8 *)(lVar1 + 0x218);
  }
  return;
}

