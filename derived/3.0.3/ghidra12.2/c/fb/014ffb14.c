
/* WARNING: Removing unreachable block (ram,0x014fff04) */
/* WARNING: Removing unreachable block (ram,0x014ffedc) */
/* WARNING: Removing unreachable block (ram,0x014ffe48) */
/* WARNING: Removing unreachable block (ram,0x014ffd68) */
/* WARNING: Removing unreachable block (ram,0x014ffcd8) */
/* WARNING: Removing unreachable block (ram,0x014ffc3c) */
/* WARNING: Removing unreachable block (ram,0x014ffbf4) */
/* WARNING: Removing unreachable block (ram,0x014ffb80) */
/* WARNING: Removing unreachable block (ram,0x014ffda8) */
/* WARNING: Removing unreachable block (ram,0x014ffc7c) */
/* WARNING: Removing unreachable block (ram,0x014ffb70) */
/* WARNING: Removing unreachable block (ram,0x014ffb8c) */
/* WARNING: Removing unreachable block (ram,0x014ffbe4) */
/* WARNING: Removing unreachable block (ram,0x014ffc24) */
/* WARNING: Removing unreachable block (ram,0x014ffc4c) */
/* WARNING: Removing unreachable block (ram,0x014ffc58) */
/* WARNING: Removing unreachable block (ram,0x014ffce8) */
/* WARNING: Removing unreachable block (ram,0x014ffd4c) */
/* WARNING: Removing unreachable block (ram,0x014ffd78) */
/* WARNING: Removing unreachable block (ram,0x014ffe58) */
/* WARNING: Removing unreachable block (ram,0x014ffef4) */
/* WARNING: Removing unreachable block (ram,0x014fff84) */
/* WARNING: Removing unreachable block (ram,0x014ffe80) */

undefined8 FUN_014ffb14(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint local_4;
  
  local_4 = *(uint *)(param_1 + 8);
  lVar1 = *(long *)PTR_DAT_04bb27a8;
  if (local_4 == 0) {
    if (*(long *)(lVar1 + 0x1f8) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar1 + 0x1f8) + 0x70) == 0) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x1f8) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar1 + 0x1f8) + 0x78) == 0) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x1f8) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar1 + 0x1f8) + 0x80) == 0) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x1f8) == 0) {
      return 0;
    }
    local_4 = 0;
  }
  else {
    if (local_4 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      lVar3 = *(long *)(lVar1 + 0x1f8);
    }
    else {
      plVar2 = (long *)(lVar1 + 0x30) + local_4;
      if (0x38 < local_4) {
        plVar2 = (long *)(lVar1 + 0x30);
      }
      lVar3 = *plVar2;
    }
    if (lVar3 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      lVar3 = 0;
    }
    else {
      if (local_4 == 0) {
        plVar2 = (long *)(lVar1 + 0x1f8);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x30) + local_4;
        if (0x38 < local_4) {
          plVar2 = (long *)(lVar1 + 0x30);
        }
      }
      lVar3 = *plVar2;
    }
    if (*(long *)(lVar3 + 0x70) == 0) {
      return 0;
    }
    if (local_4 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      lVar3 = *(long *)(lVar1 + 0x1f8);
    }
    else {
      plVar2 = (long *)(lVar1 + 0x30) + local_4;
      if (0x38 < local_4) {
        plVar2 = (long *)(lVar1 + 0x30);
      }
      lVar3 = *plVar2;
    }
    if (lVar3 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      lVar3 = 0;
    }
    else {
      if (local_4 == 0) {
        plVar2 = (long *)(lVar1 + 0x1f8);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x30) + local_4;
        if (0x38 < local_4) {
          plVar2 = (long *)(lVar1 + 0x30);
        }
      }
      lVar3 = *plVar2;
    }
    if (*(long *)(lVar3 + 0x78) == 0) {
      return 0;
    }
    if (local_4 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      lVar3 = *(long *)(lVar1 + 0x1f8);
    }
    else {
      plVar2 = (long *)(lVar1 + 0x30) + local_4;
      if (0x38 < local_4) {
        plVar2 = (long *)(lVar1 + 0x30);
      }
      lVar3 = *plVar2;
    }
    if (lVar3 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      lVar3 = 0;
    }
    else {
      if (local_4 == 0) {
        plVar2 = (long *)(lVar1 + 0x1f8);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x30) + local_4;
        if (0x38 < local_4) {
          plVar2 = (long *)(lVar1 + 0x30);
        }
      }
      lVar3 = *plVar2;
    }
    if (*(long *)(lVar3 + 0x80) == 0) {
      return 0;
    }
    if (local_4 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      plVar2 = (long *)(lVar1 + 0x1f8);
    }
    else {
      plVar2 = (long *)(lVar1 + 0x30) + local_4;
      if (0x38 < local_4) {
        plVar2 = (long *)(lVar1 + 0x30);
      }
    }
    if (*plVar2 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      lVar1 = 0;
      goto LAB_014fff6c;
    }
  }
  if (local_4 == 0) {
    plVar2 = (long *)(lVar1 + 0x1f8);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x30) + local_4;
    if (0x38 < local_4) {
      plVar2 = (long *)(lVar1 + 0x30);
    }
  }
  lVar1 = *plVar2;
LAB_014fff6c:
  if (*(long *)(lVar1 + 0x88) == 0) {
    return 0;
  }
  return 1;
}

