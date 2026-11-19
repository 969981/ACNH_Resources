
void FUN_039d24e8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_04bc1010;
  if (*(long *)(param_1 + 0xa98) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xa98) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039d25a4;
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
LAB_039d25a4:
  if (*(long *)(param_1 + 0xaa0) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xaa0) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039d2640;
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
LAB_039d2640:
  if (*(long *)(param_1 + 0xaa8) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xaa8) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039d26dc;
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
LAB_039d26dc:
  if (*(long *)(param_1 + 0xab0) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xab0) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039d2778;
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
LAB_039d2778:
  if (*(long *)(param_1 + 0xab8) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xab8) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039d2814;
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
LAB_039d2814:
  if (*(long *)(param_1 + 0xac0) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xac0) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039d28b0;
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
LAB_039d28b0:
  if (*(long *)(param_1 + 0xac8) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xac8) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
          goto LAB_039d294c;
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
LAB_039d294c:
  if (*(long *)(param_1 + 0xad0) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xad0) + 0x58);
    if (uVar1 != 0xffffffff) {
      lVar6 = *(long *)puVar3;
      if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
        if (*(uint *)(lVar6 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
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
  }
  return;
}

