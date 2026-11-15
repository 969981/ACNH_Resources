
void FUN_023cbfc0(long param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__dest;
  uint *puVar8;
  void *__src;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_24;
  
  if ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) == 0) {
    local_44 = (uint)*(byte *)(param_1 + 0x1900);
    if (0x78 < local_44) {
      local_44 = 0;
    }
    local_24 = (uint)*(byte *)(param_1 + 0x1902);
    if (9 < local_24) {
      local_24 = 0;
    }
    FUN_023c79d0(param_1,&local_44,&local_24);
  }
  local_24 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    local_24 = 0;
    if (uVar2 < 0x149) {
      local_24 = uVar2;
    }
  }
  if (param_2 == local_24) {
    puVar8 = &local_48;
    uVar5 = 1;
    local_48 = (uint)*(byte *)(param_3 + 0x20);
    if (0x78 < local_48) {
      local_48 = 0;
    }
  }
  else {
    puVar8 = &local_4c;
    local_4c = 0;
    uVar5 = 0;
  }
  FUN_023c9120(param_1,uVar5,puVar8);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffe;
  puVar3 = PTR_DAT_04bb4718;
  lVar6 = *(long *)PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) == 0) {
    if (lVar6 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar8 = (uint *)&DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar8 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar8 = (uint *)(lVar6 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar8 = puVar8 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    local_24 = 3;
    *puVar8 = *puVar8 & 0xfffffff7;
    lVar6 = *(long *)puVar3;
  }
  if (lVar6 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0960);
      puVar8 = (uint *)&DAT_054f0958;
      if (iVar4 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar8 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar8 = (uint *)(lVar6 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar8 = puVar8 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  local_24 = 0xb;
  *puVar8 = *puVar8 & 0xfffff7ff;
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffdff;
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar6 = *(long *)puVar3;
    if (lVar6 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar7 = &DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar7 = &DAT_054f0958;
      }
    }
    else {
      puVar7 = (undefined8 *)(lVar6 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar7 = puVar7 + *(byte *)(param_1 + 0x1ee8);
      }
    }
    local_24 = 0x34;
    *(uint *)((long)puVar7 + 4) = *(uint *)((long)puVar7 + 4) & 0xffefffff;
  }
  puVar3 = PTR_DAT_04bb37e0;
  if (param_2 == 0x29) {
    *(undefined4 *)(param_1 + 0x21d4) = 0;
    *(undefined2 *)(param_1 + 0x21cc) = *(undefined2 *)puVar3;
    *(undefined *)(param_1 + 0x21ce) = puVar3[2];
    *(undefined *)(param_1 + 0x21cf) = puVar3[3];
    *(undefined4 *)(param_1 + 0x21d0) = *(undefined4 *)(puVar3 + 4);
    puVar3 = PTR_PTR_04bb2238;
    __dest = *(void **)(param_1 + 0x21e0);
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(void **)(puVar3 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar6) == '\0') goto LAB_023cc2dc;
        lVar1 = *(long *)(puVar3 + 8) + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_023cc2dc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_023cc2dc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_023cc2dc:
      iVar4 = (int)lVar6;
      if (*(int *)(param_1 + 0x21e8) <= (int)lVar6) {
        iVar4 = *(int *)(param_1 + 0x21e8) + -1;
      }
      memcpy(__dest,__src,(long)iVar4);
      *(undefined1 *)((long)__dest + (long)iVar4) = 0;
    }
  }
  if (*(char *)(param_1 + 0x190a) != '\0') {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    FUN_01702b70(puVar7,6,3);
  }
  return;
}

