
/* WARNING: Removing unreachable block (ram,0x0125fe34) */
/* WARNING: Removing unreachable block (ram,0x0125fdec) */
/* WARNING: Removing unreachable block (ram,0x0125fe10) */
/* WARNING: Removing unreachable block (ram,0x0125fe58) */

undefined8 FUN_0125fdb4(long param_1,short param_2)

{
  char cVar1;
  long lVar2;
  undefined2 *puVar3;
  uint uVar4;
  long *plVar5;
  float fVar6;
  uint local_14;
  
  lVar2 = FUN_01260194(0xe7);
  local_14 = 0;
  if (((((DAT_05618008 == param_2) || (local_14 = 1, DAT_05618028 == param_2)) ||
       (local_14 = 2, DAT_05618048 == param_2)) || (local_14 = 3, DAT_05618068 == param_2)) &&
     ((local_14 < *(uint *)(lVar2 + 0x420) &&
      (lVar2 = *(long *)(*(long *)(lVar2 + 0x428) + (long)(int)local_14 * 8), lVar2 != 0)))) {
    plVar5 = (long *)(lVar2 + 0x68);
    (**(code **)(*plVar5 + 0xf0))(plVar5);
    lVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5);
    puVar3 = &DAT_051565e8;
    if (((DAT_051565e8 == param_2) ||
        ((puVar3 = &DAT_05156608, DAT_05156608 == param_2 ||
         (puVar3 = &DAT_05156628, DAT_05156628 == param_2)))) ||
       (puVar3 = &DAT_05156648, DAT_05156648 == param_2)) {
      cVar1 = *(char *)(puVar3 + 0xc);
      fVar6 = (float)*(int *)(lVar2 + 4) * 0.5;
      uVar4 = 0;
      if (fVar6 != (float)(int)fVar6) {
        uVar4 = (uint)(fVar6 < 0.0);
      }
      *(uint *)(param_1 + 0x10) = (uint)(cVar1 == '\0') << 7;
      *(uint *)(param_1 + 0x14) = (int)fVar6 - uVar4;
      *(uint *)(param_1 + 0x20) = (uint)(cVar1 == '\0') << 7 | 0xf;
      *(uint *)(param_1 + 0x24) = ((int)fVar6 - uVar4) + 0xf;
      return 1;
    }
  }
  return 0;
}

