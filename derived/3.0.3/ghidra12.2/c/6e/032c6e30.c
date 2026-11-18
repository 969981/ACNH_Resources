
/* WARNING: Removing unreachable block (ram,0x032c6e80) */

void FUN_032c6e30(long param_1,long *param_2,long *param_3,long param_4,ulong param_5,long param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *__s;
  byte *pbVar13;
  undefined *local_80;
  long lStack_78;
  undefined *local_70;
  char *pcStack_68;
  undefined1 local_48 [4];
  int local_44;
  
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x18) + 0x30))
                     ((long *)**(undefined8 **)(param_1 + 0x18),0x70,8);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar1 = PTR_DAT_04bc8e60 + 0x10;
  puVar4[7] = 0;
  puVar4[5] = 0;
  puVar4[6] = puVar1;
  puVar4[0xc] = &DAT_3f8000003f800000;
  puVar4[0xd] = 0;
  __s = *(byte **)(param_4 + 8);
  pbVar13 = (byte *)param_3[1];
  if (*__s != 0) {
    plVar5 = (long *)FUN_00369c74(*(undefined8 *)(param_1 + 0x28),
                                  *(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x68),__s,param_2,1);
    if ((param_5 & 1) != 0) {
      (**(code **)(*plVar5 + 0xf8))(plVar5);
      (**(code **)(*param_2 + 0x80))(param_2,plVar5,1,1);
    }
    puVar4[5] = plVar5;
  }
  if (*pbVar13 != 0) {
    __s = pbVar13;
  }
  sVar6 = strlen((char *)__s);
  uVar3 = (uint)sVar6;
  if (uVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar7 = uVar3 & 3;
    if (uVar3 < 4) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar3 = uVar3 & 0xfffffffc;
      uVar9 = 0xffffffff;
      do {
        uVar3 = uVar3 - 4;
        uVar2 = crc32b(uVar9,(uint)*__s,0x4c11db7);
        uVar2 = crc32b(uVar2,(uint)__s[1],0x4c11db7);
        uVar2 = crc32b(uVar2,(uint)__s[2],0x4c11db7);
        pbVar13 = __s + 3;
        __s = __s + 4;
        uVar9 = crc32b(uVar2,(uint)*pbVar13,0x4c11db7);
      } while (uVar3 != 0);
    }
    if ((sVar6 & 3) != 0) {
      do {
        uVar7 = uVar7 - 1;
        uVar9 = crc32b(uVar9,(uint)*__s,0x4c11db7);
        __s = __s + 1;
      } while (uVar7 != 0);
    }
    uVar9 = ~uVar9;
  }
  *(uint *)(puVar4 + 0xd) = uVar9;
  *(undefined4 *)((long)puVar4 + 0x6c) = 0;
  puVar10 = puVar4;
  do {
    plVar5 = puVar10 + 5;
    puVar10 = (undefined8 *)puVar10[3];
  } while (puVar10 != (undefined8 *)0x0 && *plVar5 == 0);
  if ((*plVar5 == 0) && (**(char **)(param_6 + 8) != '\0')) {
    local_44 = 0;
    local_48[0] = 0;
    lStack_78 = param_3[1];
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_70 = local_80;
    pcStack_68 = *(char **)(param_6 + 8);
    FUN_032ca830(*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x580),&local_44,local_48,&local_70,
                 &local_80);
    if (local_44 != 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 != 0) {
        lVar11 = lVar8;
        do {
          if (*(int *)(lVar11 + 0x68) == local_44) goto LAB_032c70c0;
          lVar11 = *(long *)(lVar11 + 0x10);
        } while (lVar11 != 0);
      }
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
  goto LAB_032c6fd8;
  while (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0) {
LAB_032c70c0:
    if (*(int *)(lVar8 + 0x68) == local_44) break;
  }
  lVar11 = lVar8;
  do {
    plVar5 = (long *)(lVar11 + 0x28);
    lVar11 = *(long *)(lVar11 + 0x18);
  } while (lVar11 != 0 && *plVar5 == 0);
  if (*plVar5 != 0) {
    puVar4[3] = lVar8;
    *(undefined1 *)(puVar4 + 4) = local_48[0];
  }
LAB_032c6fd8:
  puVar10 = puVar4;
  do {
    puVar12 = puVar10;
    plVar5 = (long *)puVar12[5];
    puVar10 = (undefined8 *)puVar12[3];
  } while ((undefined8 *)puVar12[3] != (undefined8 *)0x0 && plVar5 == (long *)0x0);
  *(undefined4 *)((long)puVar12 + 0x6c) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,0);
  }
  puVar12 = (undefined8 *)(param_1 + 0x20);
  puVar10 = (undefined8 *)*puVar12;
  if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
    *puVar12 = puVar4;
  }
  else {
    do {
      puVar12 = puVar10;
      puVar10 = (undefined8 *)puVar12[2];
    } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
    puVar12[2] = puVar4;
    puVar4[1] = puVar12;
    puVar12 = (undefined8 *)*puVar12;
  }
  *puVar4 = puVar12;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_70 = (undefined *)0x0;
  local_80 = (undefined *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)&local_70,(ulong *)&local_80);
  return;
}

