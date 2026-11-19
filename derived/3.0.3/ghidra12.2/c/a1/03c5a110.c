
void FUN_03c5a110(long *param_1,long *param_2,ulong param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  long lVar5;
  void *__dest;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong local_48;
  long *local_28;
  
  uVar11 = param_3 & 0xffffffff;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar6 = 0;
  do {
    if (*(char *)(param_2[1] + uVar6) == '\0') goto joined_r0x03c5a198;
    lVar13 = param_2[1] + uVar6;
    if (*(char *)(lVar13 + 1) == '\0') {
      uVar6 = uVar6 + 1;
      goto joined_r0x03c5a198;
    }
    if (*(char *)(lVar13 + 2) == '\0') {
      uVar6 = uVar6 + 2;
      goto joined_r0x03c5a198;
    }
    uVar6 = uVar6 + 3;
  } while (uVar6 != 0x80001);
  uVar6 = 0;
joined_r0x03c5a198:
  if (((int)param_3 < 0) || ((int)uVar6 <= (int)param_3)) {
    uVar11 = uVar6 & 0xffffffff;
    *(short *)((long)param_1 + 0x14) = (short)uVar6;
    *(undefined1 *)((long)param_1 + 0x17) = 1;
  }
  else {
    *(short *)((long)param_1 + 0x14) = (short)uVar11;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  if (param_4 != 1) {
    if (param_4 == 2) {
LAB_03c5a254:
      uVar11 = uVar11 & 0xffff;
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        __dest = malloc(uVar11 + 1);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar3 = (undefined8 *)(lVar13 + 8);
        if (lVar5 != 0) {
          puVar3 = (undefined8 *)(lVar5 + 0xa8);
        }
        __dest = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,uVar11 + 1,8);
      }
      *(undefined1 *)((long)__dest + uVar11) = 0;
      uVar4 = *(ushort *)((long)param_1 + 0x14);
      (**(code **)(*param_2 + 0x18))(param_2);
      if (__dest != (void *)param_2[1]) {
        uVar9 = (uint)uVar11;
        if ((uint)uVar4 <= (uint)uVar11) {
          uVar9 = (uint)uVar4;
        }
        memcpy(__dest,(void *)param_2[1],(ulong)uVar9);
        *(undefined1 *)((long)__dest + (ulong)uVar9) = 0;
      }
      param_1[1] = (long)__dest;
      *(undefined2 *)((long)param_1 + 0x16) = 0x101;
      goto LAB_03c5a30c;
    }
    local_28 = (long *)0x0;
    local_48 = 0;
    nn::os::GetCurrentStackInfo((ulong *)&local_28,&local_48);
    if ((param_1 < local_28) || ((long *)(local_48 + (long)local_28) <= param_1)) {
      (**(code **)(*param_2 + 0x18))(param_2);
      plVar12 = (long *)param_2[1];
      local_28 = (long *)0x0;
      local_48 = 0;
      nn::os::GetCurrentStackInfo((ulong *)&local_28,&local_48);
      if ((local_28 <= plVar12) && (plVar12 < (long *)(local_48 + (long)local_28))) {
        uVar11 = (ulong)*(ushort *)((long)param_1 + 0x14);
        goto LAB_03c5a254;
      }
    }
  }
  param_1[1] = param_2[1];
LAB_03c5a30c:
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar4 = *(ushort *)((long)param_1 + 0x14);
  if (uVar4 == 0) {
    uVar9 = 0;
  }
  else {
    pbVar7 = (byte *)param_1[1];
    uVar8 = uVar4 & 3;
    if (uVar4 < 4) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar10 = uVar4 & 0xfffc;
      uVar9 = 0xffffffff;
      do {
        uVar10 = uVar10 - 4;
        uVar2 = crc32b(uVar9,(uint)*pbVar7,0x4c11db7);
        uVar2 = crc32b(uVar2,(uint)pbVar7[1],0x4c11db7);
        uVar2 = crc32b(uVar2,(uint)pbVar7[2],0x4c11db7);
        pbVar1 = pbVar7 + 3;
        pbVar7 = pbVar7 + 4;
        uVar9 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
      } while (uVar10 != 0);
    }
    if ((uVar4 & 3) != 0) {
      do {
        uVar8 = uVar8 - 1;
        uVar9 = crc32b(uVar9,(uint)*pbVar7,0x4c11db7);
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    uVar9 = ~uVar9;
  }
  *(uint *)(param_1 + 2) = uVar9;
  return;
}

