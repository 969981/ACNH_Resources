
void FUN_02ad3300(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bc47a0;
  puVar1 = PTR_DAT_04bc4798;
  *param_1 = &PTR_FUN_04a9f2f8;
  param_1[0x12d] = puVar1 + 0x10;
  param_1[0x137] = puVar2 + 0x10;
  if (param_1[0x13f] != 0) {
    if (0 < *(int *)(param_1 + 0x13e)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x13f] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x140];
        param_1[0x140] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x13e));
    }
    pvVar5 = (void *)param_1[0x141];
    *(undefined4 *)(param_1 + 0x13e) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xa0c) = 0;
    *(undefined8 *)((long)param_1 + 0xa04) = 0;
    *(undefined8 *)((long)param_1 + 0x9fc) = 0;
    *(undefined8 *)((long)param_1 + 0x9f4) = 0;
  }
  param_1[0x118] = puVar1 + 0x10;
  param_1[0x122] = puVar2 + 0x10;
  if (param_1[0x12a] != 0) {
    if (0 < *(int *)(param_1 + 0x129)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x12a] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[299];
        param_1[299] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x129));
    }
    pvVar5 = (void *)param_1[300];
    *(undefined4 *)(param_1 + 0x129) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x964) = 0;
    *(undefined8 *)((long)param_1 + 0x95c) = 0;
    *(undefined8 *)((long)param_1 + 0x954) = 0;
    *(undefined8 *)((long)param_1 + 0x94c) = 0;
  }
  param_1[0x103] = puVar1 + 0x10;
  param_1[0x10d] = puVar2 + 0x10;
  if (param_1[0x115] != 0) {
    if (0 < *(int *)(param_1 + 0x114)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x115] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x116];
        param_1[0x116] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x114));
    }
    pvVar5 = (void *)param_1[0x117];
    *(undefined4 *)(param_1 + 0x114) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x8bc) = 0;
    *(undefined8 *)((long)param_1 + 0x8b4) = 0;
    *(undefined8 *)((long)param_1 + 0x8ac) = 0;
    *(undefined8 *)((long)param_1 + 0x8a4) = 0;
  }
  param_1[0xee] = puVar1 + 0x10;
  param_1[0xf8] = puVar2 + 0x10;
  if (param_1[0x100] != 0) {
    if (0 < *(int *)(param_1 + 0xff)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x100] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x101];
        param_1[0x101] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0xff));
    }
    pvVar5 = (void *)param_1[0x102];
    *(undefined4 *)(param_1 + 0xff) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x814) = 0;
    *(undefined8 *)((long)param_1 + 0x80c) = 0;
    *(undefined8 *)((long)param_1 + 0x804) = 0;
    *(undefined8 *)((long)param_1 + 0x7fc) = 0;
  }
  param_1[0xd9] = puVar1 + 0x10;
  param_1[0xe3] = puVar2 + 0x10;
  if (param_1[0xeb] != 0) {
    if (0 < *(int *)(param_1 + 0xea)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0xeb] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0xec];
        param_1[0xec] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0xea));
    }
    pvVar5 = (void *)param_1[0xed];
    *(undefined4 *)(param_1 + 0xea) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x76c) = 0;
    *(undefined8 *)((long)param_1 + 0x764) = 0;
    *(undefined8 *)((long)param_1 + 0x75c) = 0;
    *(undefined8 *)((long)param_1 + 0x754) = 0;
  }
  param_1[0xc4] = puVar1 + 0x10;
  param_1[0xce] = puVar2 + 0x10;
  if (param_1[0xd6] != 0) {
    if (0 < *(int *)(param_1 + 0xd5)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0xd6] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0xd7];
        param_1[0xd7] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0xd5));
    }
    pvVar5 = (void *)param_1[0xd8];
    *(undefined4 *)(param_1 + 0xd5) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x6c4) = 0;
    *(undefined8 *)((long)param_1 + 0x6bc) = 0;
    *(undefined8 *)((long)param_1 + 0x6b4) = 0;
    *(undefined8 *)((long)param_1 + 0x6ac) = 0;
  }
  param_1[0xaf] = puVar1 + 0x10;
  param_1[0xb9] = puVar2 + 0x10;
  if (param_1[0xc1] != 0) {
    if (0 < *(int *)(param_1 + 0xc0)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0xc1] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0xc2];
        param_1[0xc2] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0xc0));
    }
    pvVar5 = (void *)param_1[0xc3];
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x61c) = 0;
    *(undefined8 *)((long)param_1 + 0x614) = 0;
    *(undefined8 *)((long)param_1 + 0x60c) = 0;
    *(undefined8 *)((long)param_1 + 0x604) = 0;
  }
  param_1[0x9a] = puVar1 + 0x10;
  param_1[0xa4] = puVar2 + 0x10;
  if (param_1[0xac] != 0) {
    if (0 < *(int *)(param_1 + 0xab)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0xac] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0xad];
        param_1[0xad] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0xab));
    }
    pvVar5 = (void *)param_1[0xae];
    *(undefined4 *)(param_1 + 0xab) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x574) = 0;
    *(undefined8 *)((long)param_1 + 0x56c) = 0;
    *(undefined8 *)((long)param_1 + 0x564) = 0;
    *(undefined8 *)((long)param_1 + 0x55c) = 0;
  }
  param_1[0x85] = puVar1 + 0x10;
  param_1[0x8f] = puVar2 + 0x10;
  if (param_1[0x97] != 0) {
    if (0 < *(int *)(param_1 + 0x96)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x97] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x98];
        param_1[0x98] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x96));
    }
    pvVar5 = (void *)param_1[0x99];
    *(undefined4 *)(param_1 + 0x96) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x4cc) = 0;
    *(undefined8 *)((long)param_1 + 0x4c4) = 0;
    *(undefined8 *)((long)param_1 + 0x4bc) = 0;
    *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  }
  param_1[0x70] = puVar1 + 0x10;
  param_1[0x7a] = puVar2 + 0x10;
  if (param_1[0x82] != 0) {
    if (0 < *(int *)(param_1 + 0x81)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x82] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x83];
        param_1[0x83] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x81));
    }
    pvVar5 = (void *)param_1[0x84];
    *(undefined4 *)(param_1 + 0x81) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x424) = 0;
    *(undefined8 *)((long)param_1 + 0x41c) = 0;
    *(undefined8 *)((long)param_1 + 0x414) = 0;
    *(undefined8 *)((long)param_1 + 0x40c) = 0;
  }
  param_1[0x5b] = puVar1 + 0x10;
  param_1[0x65] = puVar2 + 0x10;
  if (param_1[0x6d] != 0) {
    if (0 < *(int *)(param_1 + 0x6c)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x6d] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x6e];
        param_1[0x6e] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x6c));
    }
    pvVar5 = (void *)param_1[0x6f];
    *(undefined4 *)(param_1 + 0x6c) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x37c) = 0;
    *(undefined8 *)((long)param_1 + 0x374) = 0;
    *(undefined8 *)((long)param_1 + 0x36c) = 0;
    *(undefined8 *)((long)param_1 + 0x364) = 0;
  }
  param_1[0x46] = puVar1 + 0x10;
  param_1[0x50] = puVar2 + 0x10;
  if (param_1[0x58] != 0) {
    if (0 < *(int *)(param_1 + 0x57)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x58] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x59];
        param_1[0x59] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x57));
    }
    pvVar5 = (void *)param_1[0x5a];
    *(undefined4 *)(param_1 + 0x57) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2d4) = 0;
    *(undefined8 *)((long)param_1 + 0x2cc) = 0;
    *(undefined8 *)((long)param_1 + 0x2c4) = 0;
    *(undefined8 *)((long)param_1 + 700) = 0;
  }
  param_1[0x31] = puVar1 + 0x10;
  param_1[0x3b] = puVar2 + 0x10;
  if (param_1[0x43] != 0) {
    if (0 < *(int *)(param_1 + 0x42)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x43] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x44];
        param_1[0x44] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x42));
    }
    pvVar5 = (void *)param_1[0x45];
    *(undefined4 *)(param_1 + 0x42) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x22c) = 0;
    *(undefined8 *)((long)param_1 + 0x224) = 0;
    *(undefined8 *)((long)param_1 + 0x21c) = 0;
    *(undefined8 *)((long)param_1 + 0x214) = 0;
  }
  param_1[0x1c] = puVar1 + 0x10;
  param_1[0x26] = puVar2 + 0x10;
  if (param_1[0x2e] != 0) {
    if (0 < *(int *)(param_1 + 0x2d)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x2e] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x2f];
        param_1[0x2f] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x2d));
    }
    pvVar5 = (void *)param_1[0x30];
    *(undefined4 *)(param_1 + 0x2d) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x184) = 0;
    *(undefined8 *)((long)param_1 + 0x17c) = 0;
    *(undefined8 *)((long)param_1 + 0x174) = 0;
    *(undefined8 *)((long)param_1 + 0x16c) = 0;
  }
  return;
}

