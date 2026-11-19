
void FUN_039d15f4(long param_1,long param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar4 = param_1 + (long)param_4 * 0x5d8;
  puVar1 = (uint *)(lVar4 + 0x498);
  lVar5 = lVar4 + 0x4c0;
  uVar3 = *(uint *)(lVar4 + 0x498);
  if (((uVar3 & 1) != 0) &&
     (lVar4 = *(long *)(lVar5 + (long)*(char *)(param_1 + 0xcb8) * 8), lVar4 != 0)) {
    uVar3 = *(uint *)(lVar4 + 0x58);
    if (uVar3 != 0xffffffff) {
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
        if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0
           ) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
          goto LAB_039d16cc;
        }
      }
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
        uVar6 = 0x112;
        uVar7 = 0x12;
      }
      else {
        uVar6 = 0x111;
        uVar7 = 0x11;
      }
      if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
        uVar7 = uVar6;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar7);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
LAB_039d16cc:
    uVar3 = *puVar1;
  }
  if (((uVar3 >> 1 & 1) != 0) &&
     (lVar4 = *(long *)(lVar5 + (long)*(char *)(param_1 + 0xdb8) * 8), lVar4 != 0)) {
    uVar3 = *(uint *)(lVar4 + 0x58);
    if (uVar3 != 0xffffffff) {
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
        if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0
           ) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
          goto LAB_039d177c;
        }
      }
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
        uVar6 = 0x112;
        uVar7 = 0x12;
      }
      else {
        uVar6 = 0x111;
        uVar7 = 0x11;
      }
      if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
        uVar7 = uVar6;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar7);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
LAB_039d177c:
    uVar3 = *puVar1;
  }
  if (((uVar3 >> 2 & 1) != 0) &&
     (lVar4 = *(long *)(lVar5 + (long)*(char *)(param_1 + 0xeb8) * 8), lVar4 != 0)) {
    uVar3 = *(uint *)(lVar4 + 0x58);
    if (uVar3 != 0xffffffff) {
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
        if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0
           ) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
          goto LAB_039d182c;
        }
      }
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
        uVar6 = 0x112;
        uVar7 = 0x12;
      }
      else {
        uVar6 = 0x111;
        uVar7 = 0x11;
      }
      if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
        uVar7 = uVar6;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar7);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
LAB_039d182c:
    uVar3 = *puVar1;
  }
  if (((uVar3 >> 3 & 1) == 0) ||
     (lVar4 = *(long *)(lVar5 + (long)*(char *)(param_1 + 0xfb8) * 8), lVar4 == 0))
  goto LAB_039d18e0;
  uVar3 = *(uint *)(lVar4 + 0x58);
  if (uVar3 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar2 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar2) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        goto LAB_039d18dc;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar6 = 0x112;
      uVar7 = 0x12;
    }
    else {
      uVar6 = 0x111;
      uVar7 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar7 = uVar6;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar7);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_039d18dc:
  uVar3 = *puVar1;
LAB_039d18e0:
  if (((uVar3 >> 4 & 1) != 0) &&
     (lVar5 = *(long *)(lVar5 + (long)*(char *)(param_1 + 0x10b8) * 8), lVar5 != 0)) {
    uVar3 = *(uint *)(lVar5 + 0x58);
    if (uVar3 != 0xffffffff) {
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
        if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0
           ) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
          return;
        }
      }
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
        uVar6 = 0x112;
        uVar7 = 0x12;
      }
      else {
        uVar6 = 0x111;
        uVar7 = 0x11;
      }
      if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
        uVar7 = uVar6;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar7);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
  return;
}

