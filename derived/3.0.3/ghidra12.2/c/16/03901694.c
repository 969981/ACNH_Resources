
void FUN_03901694(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_04bc1010;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_03901750;
        }
      }
      if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
        uVar4 = 0x112;
        uVar5 = 0x12;
      }
      else {
        uVar4 = 0x111;
        uVar5 = 0x11;
      }
      if ((*(uint *)(lVar6 + 800) & 2) != 0) {
        uVar5 = uVar4;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03901750:
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039017ec;
        }
      }
      if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
        uVar4 = 0x112;
        uVar5 = 0x12;
      }
      else {
        uVar4 = 0x111;
        uVar5 = 0x11;
      }
      if ((*(uint *)(lVar6 + 800) & 2) != 0) {
        uVar5 = uVar4;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_039017ec:
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_03901888;
        }
      }
      if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
        uVar4 = 0x112;
        uVar5 = 0x12;
      }
      else {
        uVar4 = 0x111;
        uVar5 = 0x11;
      }
      if ((*(uint *)(lVar6 + 800) & 2) != 0) {
        uVar5 = uVar4;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03901888:
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_03901924;
        }
      }
      if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
        uVar4 = 0x112;
        uVar5 = 0x12;
      }
      else {
        uVar4 = 0x111;
        uVar5 = 0x11;
      }
      if ((*(uint *)(lVar6 + 800) & 2) != 0) {
        uVar5 = uVar4;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03901924:
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x40) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039019c0;
        }
      }
      if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
        uVar4 = 0x112;
        uVar5 = 0x12;
      }
      else {
        uVar4 = 0x111;
        uVar5 = 0x11;
      }
      if ((*(uint *)(lVar6 + 800) & 2) != 0) {
        uVar5 = uVar4;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_039019c0:
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x48) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_03901a5c;
        }
      }
      if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
        uVar4 = 0x112;
        uVar5 = 0x12;
      }
      else {
        uVar4 = 0x111;
        uVar5 = 0x11;
      }
      if ((*(uint *)(lVar6 + 800) & 2) != 0) {
        uVar5 = uVar4;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03901a5c:
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x50) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_03901af8;
        }
      }
      if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
        uVar4 = 0x112;
        uVar5 = 0x12;
      }
      else {
        uVar4 = 0x111;
        uVar5 = 0x11;
      }
      if ((*(uint *)(lVar6 + 800) & 2) != 0) {
        uVar5 = uVar4;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03901af8:
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x58) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_03901b94;
        }
      }
      if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
        uVar4 = 0x112;
        uVar5 = 0x12;
      }
      else {
        uVar4 = 0x111;
        uVar5 = 0x11;
      }
      if ((*(uint *)(lVar6 + 800) & 2) != 0) {
        uVar5 = uVar4;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03901b94:
  if ((*(long *)(param_1 + 0x60) != 0) && (*(int *)(*(long *)(param_1 + 0x60) + 0x58) == -1)) {
    lVar6 = *(long *)puVar3;
    if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
      uVar1 = 0;
      if (~(uint)*(ushort *)(lVar6 + 0x3da) < *(uint *)(lVar6 + 0x368)) {
        uVar1 = ~(uint)*(ushort *)(lVar6 + 0x3da);
      }
      if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar1 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        return;
      }
    }
    if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
      uVar4 = 0x112;
      uVar5 = 0x12;
    }
    else {
      uVar4 = 0x111;
      uVar5 = 0x11;
    }
    if ((*(uint *)(lVar6 + 800) & 2) != 0) {
      uVar5 = uVar4;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

