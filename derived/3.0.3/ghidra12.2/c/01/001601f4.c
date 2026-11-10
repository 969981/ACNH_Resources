
undefined8 FUN_001601f4(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar2 = lVar5 + 0x820;
  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) & 0xfffeffff;
  *(uint *)(lVar5 + 0x1c0) = *(uint *)(lVar5 + 0x1c0) & 0xfffffffd;
  if ((*(byte *)(param_1[0x88] + 0x80) & 3) != 0) {
    if (**(long **)(lVar5 + 0x1e8) != 0) {
      lVar2 = **(long **)(lVar5 + 0x1e8);
    }
  }
  if (*(long *)(lVar5 + 0x6e8) != 0) {
    return 0;
  }
  if (*(int *)(lVar5 + 0xa38) - 3U < 2) {
    uVar3 = FUN_00154534(lVar2);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    pcVar4 = "Cannot rewind mime/post data";
LAB_00160274:
    FUN_0014d5f8(lVar5,pcVar4);
  }
  else {
    if (*(long *)(lVar5 + 0x6f0) == 0) {
      if (*(long *)(lVar5 + 0x740) == 0) {
        if ((*(undefined **)(lVar5 + 0x1548) == PTR_fread_04bcb720) &&
           (iVar1 = fseek(*(FILE **)(lVar5 + 0x1550),0,0), iVar1 != -1)) {
          return 0;
        }
        pcVar4 = "necessary data rewind wasn\'t possible";
        goto LAB_00160274;
      }
      FUN_00149fe4(lVar5,1);
      iVar1 = (**(code **)(lVar5 + 0x740))(lVar5,1,*(undefined8 *)(lVar5 + 0x7a0));
      FUN_00149fe4(lVar5,0);
      FUN_0014d430(lVar5,"the ioctl callback returned %d\n",iVar1);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar4 = "ioctl callback returned error %d";
    }
    else {
      FUN_00149fe4(lVar5,1);
      iVar1 = (**(code **)(lVar5 + 0x6f0))(*(undefined8 *)(lVar5 + 0x778),0,0);
      FUN_00149fe4(lVar5,0);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar4 = "seek callback returned error %d";
    }
    FUN_0014d5f8(lVar5,pcVar4,iVar1);
  }
  return 0x41;
}

