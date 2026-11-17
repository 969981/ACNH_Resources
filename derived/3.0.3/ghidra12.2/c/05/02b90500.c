
/* WARNING: Removing unreachable block (ram,0x02b90600) */
/* WARNING: Removing unreachable block (ram,0x02b905b8) */
/* WARNING: Removing unreachable block (ram,0x02b90570) */
/* WARNING: Removing unreachable block (ram,0x02b90528) */
/* WARNING: Removing unreachable block (ram,0x02b9054c) */
/* WARNING: Removing unreachable block (ram,0x02b90594) */
/* WARNING: Removing unreachable block (ram,0x02b905dc) */
/* WARNING: Removing unreachable block (ram,0x02b90658) */

bool FUN_02b90500(int param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((((((DAT_05641c48 == param_1) || (iVar5 = 1, DAT_05641c4c == param_1)) ||
        (iVar5 = 2, DAT_05641c50 == param_1)) ||
       (((iVar5 = 3, DAT_05641c54 == param_1 || (iVar5 = 4, DAT_05641c58 == param_1)) ||
        ((iVar5 = 5, DAT_05641c5c == param_1 || (iVar5 = 6, DAT_05641c60 == param_1)))))) &&
      ((iVar5 != 5 && (iVar5 != 5)))) && ((iVar5 != 6 && (lVar3 = FUN_03776400(), lVar3 != 0)))) {
    if ((*(long **)(lVar3 + 0x1b0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1b0), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    bVar1 = (*(byte *)(*(long *)(lVar3 + 0x198) + *(long *)(lVar3 + 400) + 0x20) >> 1 & 7) != 2;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x1b0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x1b0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

