
/* WARNING: Removing unreachable block (ram,0x026f83c4) */

void FUN_026f7430(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  size_t sVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  long *plVar12;
  void *pvVar13;
  
  FUN_026f8990();
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
    if (lVar7 != 0) {
      pvVar11 = *(void **)(lVar7 + 0x10);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
      }
      pvVar11 = *(void **)(lVar7 + 0x18);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
      }
    }
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if ((puVar8 != (undefined8 *)0x0) && (*(int *)(param_1 + 0x58) != 0)) {
      puVar8[0x1e] = 0;
      puVar8[0x1f] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1d] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x1b] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
      *(undefined8 *)((long)puVar8 + 0x46) = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
      memset(puVar8 + 0x20,0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)((long)(puVar8 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x68), lVar7 != 0)) {
      pvVar11 = *(void **)(lVar7 + 0x10);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
      }
      pvVar11 = *(void **)(lVar7 + 0x18);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if ((lVar7 != 0) && (1 < *(uint *)(param_1 + 0x58))) {
      *(undefined8 *)(lVar7 + 0x3f8) = 0;
      *(undefined8 *)(lVar7 + 0x3f0) = 0;
      *(undefined8 *)(lVar7 + 1000) = 0;
      *(undefined8 *)(lVar7 + 0x3e0) = 0;
      *(undefined8 *)(lVar7 + 0x3d8) = 0;
      *(undefined8 *)(lVar7 + 0x3d0) = 0;
      *(undefined8 *)(lVar7 + 0x3c8) = 0;
      *(undefined8 *)(lVar7 + 0x3c0) = 0;
      *(undefined8 *)(lVar7 + 0x3b8) = 0;
      *(undefined8 *)(lVar7 + 0x3b0) = 0;
      *(undefined8 *)(lVar7 + 0x3a8) = 0;
      *(undefined8 *)(lVar7 + 0x3a0) = 0;
      *(undefined8 *)(lVar7 + 0x398) = 0;
      *(undefined8 *)(lVar7 + 0x390) = 0;
      *(undefined8 *)(lVar7 + 0x388) = 0;
      *(undefined8 *)(lVar7 + 0x380) = 0;
      *(undefined8 *)(lVar7 + 0x378) = 0;
      *(undefined8 *)(lVar7 + 0x370) = 0;
      *(undefined8 *)(lVar7 + 0x368) = 0;
      *(undefined8 *)(lVar7 + 0x360) = 0;
      *(undefined8 *)(lVar7 + 0x358) = 0;
      *(undefined8 *)(lVar7 + 0x350) = 0;
      *(undefined8 *)(lVar7 + 0x348) = 0;
      *(undefined8 *)(lVar7 + 0x340) = 0;
      *(undefined8 *)(lVar7 + 0x338) = 0;
      *(undefined8 *)(lVar7 + 0x330) = 0;
      *(undefined8 *)(lVar7 + 0x328) = 0;
      *(undefined8 *)(lVar7 + 800) = 0;
      *(undefined8 *)(lVar7 + 0x318) = 0;
      *(undefined8 *)(lVar7 + 0x310) = 0;
      *(undefined8 *)(lVar7 + 0x308) = 0;
      *(undefined8 *)(lVar7 + 0x300) = 0;
      *(undefined2 *)(lVar7 + 0x30e) = 0xffff;
      *(undefined8 *)(lVar7 + 0x340) = 0;
      *(undefined8 *)(lVar7 + 0x346) = 0;
      *(undefined2 *)(lVar7 + 0x34e) = 0xffff;
      memset((void *)(lVar7 + 0x400),0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)(lVar7 + 0x400 + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x70), lVar7 != 0)) {
      pvVar11 = *(void **)(lVar7 + 0x10);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
      }
      pvVar11 = *(void **)(lVar7 + 0x18);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if ((lVar7 != 0) && (2 < *(uint *)(param_1 + 0x58))) {
      *(undefined8 *)(lVar7 + 0x6f8) = 0;
      *(undefined8 *)(lVar7 + 0x6f0) = 0;
      *(undefined8 *)(lVar7 + 0x6e8) = 0;
      *(undefined8 *)(lVar7 + 0x6e0) = 0;
      *(undefined8 *)(lVar7 + 0x6d8) = 0;
      *(undefined8 *)(lVar7 + 0x6d0) = 0;
      *(undefined8 *)(lVar7 + 0x6c8) = 0;
      *(undefined8 *)(lVar7 + 0x6c0) = 0;
      *(undefined8 *)(lVar7 + 0x6b8) = 0;
      *(undefined8 *)(lVar7 + 0x6b0) = 0;
      *(undefined8 *)(lVar7 + 0x6a8) = 0;
      *(undefined8 *)(lVar7 + 0x6a0) = 0;
      *(undefined8 *)(lVar7 + 0x698) = 0;
      *(undefined8 *)(lVar7 + 0x690) = 0;
      *(undefined8 *)(lVar7 + 0x688) = 0;
      *(undefined8 *)(lVar7 + 0x680) = 0;
      *(undefined8 *)(lVar7 + 0x678) = 0;
      *(undefined8 *)(lVar7 + 0x670) = 0;
      *(undefined8 *)(lVar7 + 0x668) = 0;
      *(undefined8 *)(lVar7 + 0x660) = 0;
      *(undefined8 *)(lVar7 + 0x658) = 0;
      *(undefined8 *)(lVar7 + 0x650) = 0;
      *(undefined8 *)(lVar7 + 0x648) = 0;
      *(undefined8 *)(lVar7 + 0x640) = 0;
      *(undefined8 *)(lVar7 + 0x638) = 0;
      *(undefined8 *)(lVar7 + 0x630) = 0;
      *(undefined8 *)(lVar7 + 0x628) = 0;
      *(undefined8 *)(lVar7 + 0x620) = 0;
      *(undefined8 *)(lVar7 + 0x618) = 0;
      *(undefined8 *)(lVar7 + 0x610) = 0;
      *(undefined8 *)(lVar7 + 0x608) = 0;
      *(undefined8 *)(lVar7 + 0x600) = 0;
      *(undefined2 *)(lVar7 + 0x60e) = 0xffff;
      *(undefined8 *)(lVar7 + 0x640) = 0;
      *(undefined8 *)(lVar7 + 0x646) = 0;
      *(undefined2 *)(lVar7 + 0x64e) = 0xffff;
      memset((void *)(lVar7 + 0x700),0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)(lVar7 + 0x700 + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x78), lVar7 != 0)) {
      pvVar11 = *(void **)(lVar7 + 0x10);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
      }
      pvVar11 = *(void **)(lVar7 + 0x18);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if ((lVar7 != 0) && (3 < *(uint *)(param_1 + 0x58))) {
      *(undefined8 *)(lVar7 + 0x9f8) = 0;
      *(undefined8 *)(lVar7 + 0x9f0) = 0;
      *(undefined8 *)(lVar7 + 0x9e8) = 0;
      *(undefined8 *)(lVar7 + 0x9e0) = 0;
      *(undefined8 *)(lVar7 + 0x9d8) = 0;
      *(undefined8 *)(lVar7 + 0x9d0) = 0;
      *(undefined8 *)(lVar7 + 0x9c8) = 0;
      *(undefined8 *)(lVar7 + 0x9c0) = 0;
      *(undefined8 *)(lVar7 + 0x9b8) = 0;
      *(undefined8 *)(lVar7 + 0x9b0) = 0;
      *(undefined8 *)(lVar7 + 0x9a8) = 0;
      *(undefined8 *)(lVar7 + 0x9a0) = 0;
      *(undefined8 *)(lVar7 + 0x998) = 0;
      *(undefined8 *)(lVar7 + 0x990) = 0;
      *(undefined8 *)(lVar7 + 0x988) = 0;
      *(undefined8 *)(lVar7 + 0x980) = 0;
      *(undefined8 *)(lVar7 + 0x978) = 0;
      *(undefined8 *)(lVar7 + 0x970) = 0;
      *(undefined8 *)(lVar7 + 0x968) = 0;
      *(undefined8 *)(lVar7 + 0x960) = 0;
      *(undefined8 *)(lVar7 + 0x958) = 0;
      *(undefined8 *)(lVar7 + 0x950) = 0;
      *(undefined8 *)(lVar7 + 0x948) = 0;
      *(undefined8 *)(lVar7 + 0x940) = 0;
      *(undefined8 *)(lVar7 + 0x938) = 0;
      *(undefined8 *)(lVar7 + 0x930) = 0;
      *(undefined8 *)(lVar7 + 0x928) = 0;
      *(undefined8 *)(lVar7 + 0x920) = 0;
      *(undefined8 *)(lVar7 + 0x918) = 0;
      *(undefined8 *)(lVar7 + 0x910) = 0;
      *(undefined8 *)(lVar7 + 0x908) = 0;
      *(undefined8 *)(lVar7 + 0x900) = 0;
      *(undefined2 *)(lVar7 + 0x90e) = 0xffff;
      *(undefined8 *)(lVar7 + 0x940) = 0;
      *(undefined8 *)(lVar7 + 0x946) = 0;
      *(undefined2 *)(lVar7 + 0x94e) = 0xffff;
      memset((void *)(lVar7 + 0xa00),0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)(lVar7 + 0xa00 + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x80), lVar7 != 0)) {
      pvVar11 = *(void **)(lVar7 + 0x10);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x80);
      }
      pvVar11 = *(void **)(lVar7 + 0x18);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if ((lVar7 != 0) && (4 < *(uint *)(param_1 + 0x58))) {
      *(undefined8 *)(lVar7 + 0xcf8) = 0;
      *(undefined8 *)(lVar7 + 0xcf0) = 0;
      *(undefined8 *)(lVar7 + 0xce8) = 0;
      *(undefined8 *)(lVar7 + 0xce0) = 0;
      *(undefined8 *)(lVar7 + 0xcd8) = 0;
      *(undefined8 *)(lVar7 + 0xcd0) = 0;
      *(undefined8 *)(lVar7 + 0xcc8) = 0;
      *(undefined8 *)(lVar7 + 0xcc0) = 0;
      *(undefined8 *)(lVar7 + 0xcb8) = 0;
      *(undefined8 *)(lVar7 + 0xcb0) = 0;
      *(undefined8 *)(lVar7 + 0xca8) = 0;
      *(undefined8 *)(lVar7 + 0xca0) = 0;
      *(undefined8 *)(lVar7 + 0xc98) = 0;
      *(undefined8 *)(lVar7 + 0xc90) = 0;
      *(undefined8 *)(lVar7 + 0xc88) = 0;
      *(undefined8 *)(lVar7 + 0xc80) = 0;
      *(undefined8 *)(lVar7 + 0xc78) = 0;
      *(undefined8 *)(lVar7 + 0xc70) = 0;
      *(undefined8 *)(lVar7 + 0xc68) = 0;
      *(undefined8 *)(lVar7 + 0xc60) = 0;
      *(undefined8 *)(lVar7 + 0xc58) = 0;
      *(undefined8 *)(lVar7 + 0xc50) = 0;
      *(undefined8 *)(lVar7 + 0xc48) = 0;
      *(undefined8 *)(lVar7 + 0xc40) = 0;
      *(undefined8 *)(lVar7 + 0xc38) = 0;
      *(undefined8 *)(lVar7 + 0xc30) = 0;
      *(undefined8 *)(lVar7 + 0xc28) = 0;
      *(undefined8 *)(lVar7 + 0xc20) = 0;
      *(undefined8 *)(lVar7 + 0xc18) = 0;
      *(undefined8 *)(lVar7 + 0xc10) = 0;
      *(undefined8 *)(lVar7 + 0xc08) = 0;
      *(undefined8 *)(lVar7 + 0xc00) = 0;
      *(undefined2 *)(lVar7 + 0xc0e) = 0xffff;
      *(undefined8 *)(lVar7 + 0xc40) = 0;
      *(undefined8 *)(lVar7 + 0xc46) = 0;
      *(undefined2 *)(lVar7 + 0xc4e) = 0xffff;
      memset((void *)(lVar7 + 0xd00),0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)(lVar7 + 0xd00 + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x88), lVar7 != 0)) {
      pvVar11 = *(void **)(lVar7 + 0x10);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x88);
      }
      pvVar11 = *(void **)(lVar7 + 0x18);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if ((lVar7 != 0) && (5 < *(uint *)(param_1 + 0x58))) {
      *(undefined8 *)(lVar7 + 0xff8) = 0;
      *(undefined8 *)(lVar7 + 0xff0) = 0;
      *(undefined8 *)(lVar7 + 0xfe8) = 0;
      *(undefined8 *)(lVar7 + 0xfe0) = 0;
      *(undefined8 *)(lVar7 + 0xfd8) = 0;
      *(undefined8 *)(lVar7 + 0xfd0) = 0;
      *(undefined8 *)(lVar7 + 0xfc8) = 0;
      *(undefined8 *)(lVar7 + 0xfc0) = 0;
      *(undefined8 *)(lVar7 + 0xfb8) = 0;
      *(undefined8 *)(lVar7 + 0xfb0) = 0;
      *(undefined8 *)(lVar7 + 0xfa8) = 0;
      *(undefined8 *)(lVar7 + 4000) = 0;
      *(undefined8 *)(lVar7 + 0xf98) = 0;
      *(undefined8 *)(lVar7 + 0xf90) = 0;
      *(undefined8 *)(lVar7 + 0xf88) = 0;
      *(undefined8 *)(lVar7 + 0xf80) = 0;
      *(undefined8 *)(lVar7 + 0xf78) = 0;
      *(undefined8 *)(lVar7 + 0xf70) = 0;
      *(undefined8 *)(lVar7 + 0xf68) = 0;
      *(undefined8 *)(lVar7 + 0xf60) = 0;
      *(undefined8 *)(lVar7 + 0xf58) = 0;
      *(undefined8 *)(lVar7 + 0xf50) = 0;
      *(undefined8 *)(lVar7 + 0xf48) = 0;
      *(undefined8 *)(lVar7 + 0xf40) = 0;
      *(undefined8 *)(lVar7 + 0xf38) = 0;
      *(undefined8 *)(lVar7 + 0xf30) = 0;
      *(undefined8 *)(lVar7 + 0xf28) = 0;
      *(undefined8 *)(lVar7 + 0xf20) = 0;
      *(undefined8 *)(lVar7 + 0xf18) = 0;
      *(undefined8 *)(lVar7 + 0xf10) = 0;
      *(undefined8 *)(lVar7 + 0xf08) = 0;
      *(undefined8 *)(lVar7 + 0xf00) = 0;
      *(undefined2 *)(lVar7 + 0xf0e) = 0xffff;
      *(undefined8 *)(lVar7 + 0xf40) = 0;
      *(undefined8 *)(lVar7 + 0xf46) = 0;
      *(undefined2 *)(lVar7 + 0xf4e) = 0xffff;
      memset((void *)(lVar7 + 0x1000),0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)(lVar7 + 0x1000 + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x90), lVar7 != 0)) {
      pvVar11 = *(void **)(lVar7 + 0x10);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
      }
      pvVar11 = *(void **)(lVar7 + 0x18);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if ((lVar7 != 0) && (6 < *(uint *)(param_1 + 0x58))) {
      *(undefined8 *)(lVar7 + 0x12f8) = 0;
      *(undefined8 *)(lVar7 + 0x12f0) = 0;
      *(undefined8 *)(lVar7 + 0x12e8) = 0;
      *(undefined8 *)(lVar7 + 0x12e0) = 0;
      *(undefined8 *)(lVar7 + 0x12d8) = 0;
      *(undefined8 *)(lVar7 + 0x12d0) = 0;
      *(undefined8 *)(lVar7 + 0x12c8) = 0;
      *(undefined8 *)(lVar7 + 0x12c0) = 0;
      *(undefined8 *)(lVar7 + 0x12b8) = 0;
      *(undefined8 *)(lVar7 + 0x12b0) = 0;
      *(undefined8 *)(lVar7 + 0x12a8) = 0;
      *(undefined8 *)(lVar7 + 0x12a0) = 0;
      *(undefined8 *)(lVar7 + 0x1298) = 0;
      *(undefined8 *)(lVar7 + 0x1290) = 0;
      *(undefined8 *)(lVar7 + 0x1288) = 0;
      *(undefined8 *)(lVar7 + 0x1280) = 0;
      *(undefined8 *)(lVar7 + 0x1278) = 0;
      *(undefined8 *)(lVar7 + 0x1270) = 0;
      *(undefined8 *)(lVar7 + 0x1268) = 0;
      *(undefined8 *)(lVar7 + 0x1260) = 0;
      *(undefined8 *)(lVar7 + 0x1258) = 0;
      *(undefined8 *)(lVar7 + 0x1250) = 0;
      *(undefined8 *)(lVar7 + 0x1248) = 0;
      *(undefined8 *)(lVar7 + 0x1240) = 0;
      *(undefined8 *)(lVar7 + 0x1240) = 0;
      *(undefined8 *)(lVar7 + 0x1246) = 0;
      *(undefined8 *)(lVar7 + 0x1238) = 0;
      *(undefined8 *)(&DAT_00001230 + lVar7) = 0;
      *(undefined8 *)(lVar7 + 0x1228) = 0;
      *(undefined8 *)(lVar7 + 0x1220) = 0;
      *(undefined8 *)(lVar7 + 0x1218) = 0;
      *(undefined8 *)(lVar7 + 0x1210) = 0;
      *(undefined8 *)(lVar7 + 0x1208) = 0;
      *(undefined8 *)(lVar7 + 0x1200) = 0;
      *(undefined2 *)(lVar7 + 0x120e) = 0xffff;
      *(undefined2 *)(lVar7 + 0x124e) = 0xffff;
      memset((void *)(lVar7 + 0x1300),0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)(lVar7 + 0x1300 + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x98), lVar7 != 0)) {
      pvVar11 = *(void **)(lVar7 + 0x10);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
      }
      pvVar11 = *(void **)(lVar7 + 0x18);
      if (pvVar11 != (void *)0x0) {
        memset(pvVar11,0,0x74a40);
        *(undefined8 *)((long)pvVar11 + 0x40) = 0;
        *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar11 + 0x46) = 0;
        *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar11 + 0x110);
        FUN_028119e0((long)pvVar11 + 0x37be0);
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if ((lVar7 != 0) && (7 < *(uint *)(param_1 + 0x58))) {
      *(undefined8 *)(lVar7 + 0x15f8) = 0;
      *(undefined8 *)(lVar7 + 0x15f0) = 0;
      *(undefined8 *)(lVar7 + 0x15e8) = 0;
      *(undefined8 *)(lVar7 + 0x15e0) = 0;
      *(undefined8 *)(lVar7 + 0x15d8) = 0;
      *(undefined8 *)(lVar7 + 0x15d0) = 0;
      *(undefined8 *)(lVar7 + 0x15c8) = 0;
      *(undefined8 *)(lVar7 + 0x15c0) = 0;
      *(undefined8 *)(lVar7 + 0x15b8) = 0;
      *(undefined8 *)(lVar7 + 0x15b0) = 0;
      *(undefined8 *)(lVar7 + 0x15a8) = 0;
      *(undefined8 *)(lVar7 + 0x15a0) = 0;
      *(undefined8 *)(lVar7 + 0x1598) = 0;
      *(undefined8 *)(lVar7 + 0x1590) = 0;
      *(undefined8 *)(lVar7 + 0x1588) = 0;
      *(undefined8 *)(lVar7 + 0x1580) = 0;
      *(undefined8 *)(lVar7 + 0x1578) = 0;
      *(undefined8 *)(lVar7 + 0x1570) = 0;
      *(undefined8 *)(lVar7 + 0x1568) = 0;
      *(undefined8 *)(lVar7 + 0x1560) = 0;
      *(undefined8 *)(lVar7 + 0x1558) = 0;
      *(undefined8 *)(lVar7 + 0x1550) = 0;
      *(undefined8 *)(lVar7 + 0x1548) = 0;
      *(undefined8 *)(lVar7 + 0x1540) = 0;
      *(undefined8 *)(lVar7 + 0x1540) = 0;
      *(undefined8 *)(lVar7 + 0x1546) = 0;
      *(undefined8 *)(lVar7 + 0x1538) = 0;
      *(undefined8 *)(lVar7 + 0x1530) = 0;
      *(undefined8 *)(lVar7 + 0x1528) = 0;
      *(undefined8 *)(lVar7 + 0x1520) = 0;
      *(undefined8 *)(lVar7 + 0x1518) = 0;
      *(undefined8 *)(lVar7 + 0x1510) = 0;
      *(undefined8 *)(lVar7 + 0x1508) = 0;
      *(undefined8 *)(lVar7 + 0x1500) = 0;
      *(undefined2 *)(lVar7 + 0x150e) = 0xffff;
      *(undefined2 *)(lVar7 + 0x154e) = 0xffff;
      memset((void *)(lVar7 + 0x1600),0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)(lVar7 + 0x1600 + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  lVar7 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_026f3190(param_1,0);
    FUN_026f3190(param_1,1);
    FUN_026f3190(param_1,2);
    FUN_026f3190(param_1,3);
    FUN_026f3190(param_1,4);
    FUN_026f3190(param_1,5);
    FUN_026f3190(param_1,6);
    FUN_026f3190(param_1,7);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (lVar7 != 0) {
    plVar12 = *(long **)(lVar7 + 0xe0);
    pvVar11 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12);
    memset(pvVar11,0,0x2f650);
    *(undefined8 *)((long)pvVar11 + 0x40) = 0;
    *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar11 + 0x46) = 0;
    *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
    FUN_027ecb34((long)pvVar11 + 0x110);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
    if (((plVar12 != (long *)0x0) && (pvVar11 = (void *)plVar12[1], pvVar11 != (void *)0x0)) &&
       (pvVar13 = (void *)plVar12[2], pvVar13 != (void *)0x0)) {
      sVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
      memcpy(pvVar13,pvVar11,sVar6);
      (**(code **)(*plVar12 + 0x30))(plVar12);
      plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12);
      if (plVar12 != (long *)0x0) {
        plVar5 = (long *)plVar12[1];
        while (plVar5 != plVar12) {
          plVar2 = (long *)plVar5[1];
          plVar10 = plVar2;
          if (*plVar5 != 0) {
            *(long **)(*plVar5 + 8) = plVar2;
            plVar10 = (long *)plVar5[1];
          }
          if (plVar10 != (long *)0x0) {
            *plVar10 = *plVar5;
          }
          *plVar5 = 0;
          plVar5[1] = 0;
          *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
          plVar5[-2] = plVar12[3];
          plVar12[3] = (long)(plVar5 + -2);
          plVar5 = plVar2;
        }
      }
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x78);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0x1e] = 0;
    puVar8[0x1f] = 0;
    puVar8[0x1c] = 0;
    puVar8[0x1d] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x1b] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
    *(undefined8 *)((long)puVar8 + 0x46) = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
    memset(puVar8 + 0x20,0,0x200);
    uVar9 = 0;
    do {
      uVar3 = uVar9 << 2;
      uVar4 = uVar9 >> 0x1f;
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar8 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar1 != 0x80);
  }
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0xe8);
    pvVar11 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12);
    memset(pvVar11,0,0x69560);
    *(undefined8 *)((long)pvVar11 + 0x40) = 0;
    *(undefined2 *)((long)pvVar11 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar11 + 0x46) = 0;
    *(undefined2 *)((long)pvVar11 + 0x4e) = 0xffff;
    memset((void *)((long)pvVar11 + 0x110),0,0x69061);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
    if (plVar12 != (long *)0x0) {
      pvVar11 = (void *)plVar12[1];
      pvVar13 = (void *)plVar12[2];
      if (pvVar11 != (void *)0x0 && pvVar13 != (void *)0x0) {
        sVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
        memcpy(pvVar13,pvVar11,sVar6);
        (**(code **)(*plVar12 + 0x30))(plVar12);
        plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12);
        if (plVar12 != (long *)0x0) {
          plVar5 = (long *)plVar12[1];
          while (plVar5 != plVar12) {
            plVar2 = (long *)plVar5[1];
            plVar10 = plVar2;
            if (*plVar5 != 0) {
              *(long **)(*plVar5 + 8) = plVar2;
              plVar10 = (long *)plVar5[1];
            }
            if (plVar10 != (long *)0x0) {
              *plVar10 = *plVar5;
            }
            *plVar5 = 0;
            plVar5[1] = 0;
            *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
            plVar5[-2] = plVar12[3];
            plVar12[3] = (long)(plVar5 + -2);
            plVar5 = plVar2;
          }
        }
      }
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x80);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0x1e] = 0;
    puVar8[0x1f] = 0;
    puVar8[0x1c] = 0;
    puVar8[0x1d] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x1b] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
    *(undefined8 *)((long)puVar8 + 0x46) = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
    memset(puVar8 + 0x20,0,0x200);
    uVar9 = 0;
    do {
      uVar3 = uVar9 << 2;
      uVar4 = uVar9 >> 0x1f;
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar8 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar1 != 0x80);
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (((*(byte *)(param_1 + 0x50d) ^ 0xff) & 6) == 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x188);
    pvVar13 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12);
    memset(pvVar13,0,0xb8a4e0);
    *(undefined8 *)((long)pvVar13 + 0x40) = 0;
    *(undefined2 *)((long)pvVar13 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar13 + 0x46) = 0;
    *(undefined2 *)((long)pvVar13 + 0x4e) = 0xffff;
    FUN_028f2ec0((long)pvVar13 + 0x110);
    pvVar11 = (void *)((long)pvVar13 + 0x78028);
    memset(pvVar11,0,0xb0c200);
    lVar7 = 500;
    do {
      FUN_028f4074(pvVar11);
      lVar7 = lVar7 + -1;
      pvVar11 = (void *)((long)pvVar11 + 0x5a80);
    } while (lVar7 != 0);
    FUN_028f7b30((long)pvVar13 + 0xb84228);
    *(undefined2 *)((long)pvVar13 + 0xb8a4d0) = 0;
    *(undefined4 *)((long)pvVar13 + 0xb8a4d2) = 0x101;
    *(undefined1 *)((long)pvVar13 + 0xb8a4d6) = 0;
    *(undefined4 *)((long)pvVar13 + 0xb8a4d8) = 0;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
    if (plVar12 != (long *)0x0) {
      pvVar11 = (void *)plVar12[1];
      pvVar13 = (void *)plVar12[2];
      if (pvVar11 != (void *)0x0 && pvVar13 != (void *)0x0) {
        sVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
        memcpy(pvVar13,pvVar11,sVar6);
        (**(code **)(*plVar12 + 0x30))(plVar12);
        plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12);
        if (plVar12 != (long *)0x0) {
          plVar5 = (long *)plVar12[1];
          while (plVar5 != plVar12) {
            plVar2 = (long *)plVar5[1];
            plVar10 = plVar2;
            if (*plVar5 != 0) {
              *(long **)(*plVar5 + 8) = plVar2;
              plVar10 = (long *)plVar5[1];
            }
            if (plVar10 != (long *)0x0) {
              *plVar10 = *plVar5;
            }
            *plVar5 = 0;
            plVar5[1] = 0;
            *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
            plVar5[-2] = plVar12[3];
            plVar12[3] = (long)(plVar5 + -2);
            plVar5 = plVar2;
          }
        }
      }
    }
    puVar8 = *(undefined8 **)(param_1 + 0x88);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[0x1e] = 0;
      puVar8[0x1f] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1d] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x1b] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
      *(undefined8 *)((long)puVar8 + 0x46) = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
      memset(puVar8 + 0x20,0,0x200);
      uVar9 = 0;
      do {
        uVar3 = uVar9 << 2;
        uVar4 = uVar9 >> 0x1f;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(undefined4 *)((long)(puVar8 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 400);
    if (plVar12 != (long *)0x0) {
      pvVar11 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12);
      memset(pvVar11,0,0xa2458);
      FUN_026dff90(pvVar11);
      plVar12 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      if (plVar12 != (long *)0x0) {
        pvVar11 = (void *)plVar12[1];
        pvVar13 = (void *)plVar12[2];
        if (pvVar11 != (void *)0x0 && pvVar13 != (void *)0x0) {
          sVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
          memcpy(pvVar13,pvVar11,sVar6);
          (**(code **)(*plVar12 + 0x30))(plVar12);
          plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12);
          if (plVar12 != (long *)0x0) {
            plVar5 = (long *)plVar12[1];
            while (plVar5 != plVar12) {
              plVar2 = (long *)plVar5[1];
              plVar10 = plVar2;
              if (*plVar5 != 0) {
                *(long **)(*plVar5 + 8) = plVar2;
                plVar10 = (long *)plVar5[1];
              }
              if (plVar10 != (long *)0x0) {
                *plVar10 = *plVar5;
              }
              *plVar5 = 0;
              plVar5[1] = 0;
              *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
              plVar5[-2] = plVar12[3];
              plVar12[3] = (long)(plVar5 + -2);
              plVar5 = plVar2;
            }
          }
        }
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x198);
    if (plVar12 != (long *)0x0) {
      pvVar11 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12);
      memset(pvVar11,0,0xc6788);
      FUN_026d9e40(pvVar11);
      plVar12 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      if (plVar12 != (long *)0x0) {
        pvVar11 = (void *)plVar12[1];
        pvVar13 = (void *)plVar12[2];
        if (pvVar11 != (void *)0x0 && pvVar13 != (void *)0x0) {
          sVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
          memcpy(pvVar13,pvVar11,sVar6);
          (**(code **)(*plVar12 + 0x30))(plVar12);
          plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12);
          if (plVar12 != (long *)0x0) {
            plVar5 = (long *)plVar12[1];
            while (plVar5 != plVar12) {
              plVar2 = (long *)plVar5[1];
              plVar10 = plVar2;
              if (*plVar5 != 0) {
                *(long **)(*plVar5 + 8) = plVar2;
                plVar10 = (long *)plVar5[1];
              }
              if (plVar10 != (long *)0x0) {
                *plVar10 = *plVar5;
              }
              *plVar5 = 0;
              plVar5[1] = 0;
              *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
              plVar5[-2] = plVar12[3];
              plVar12[3] = (long)(plVar5 + -2);
              plVar5 = plVar2;
            }
          }
        }
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x1a0);
    if (plVar12 != (long *)0x0) {
      pvVar11 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12);
      memset(pvVar11,0,0x14c618);
      FUN_026d8dc0(pvVar11);
      plVar12 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      if (plVar12 != (long *)0x0) {
        pvVar11 = (void *)plVar12[1];
        pvVar13 = (void *)plVar12[2];
        if (pvVar11 != (void *)0x0 && pvVar13 != (void *)0x0) {
          sVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
          memcpy(pvVar13,pvVar11,sVar6);
          (**(code **)(*plVar12 + 0x30))(plVar12);
          plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12);
          if (plVar12 != (long *)0x0) {
            plVar5 = (long *)plVar12[1];
            while (plVar5 != plVar12) {
              plVar2 = (long *)plVar5[1];
              plVar10 = plVar2;
              if (*plVar5 != 0) {
                *(long **)(*plVar5 + 8) = plVar2;
                plVar10 = (long *)plVar5[1];
              }
              if (plVar10 != (long *)0x0) {
                *plVar10 = *plVar5;
              }
              *plVar5 = 0;
              plVar5[1] = 0;
              *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
              plVar5[-2] = plVar12[3];
              plVar12[3] = (long)(plVar5 + -2);
              plVar5 = plVar2;
            }
          }
        }
      }
    }
  }
  return;
}

