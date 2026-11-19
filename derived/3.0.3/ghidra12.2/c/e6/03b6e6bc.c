
bool FUN_03b6e6bc(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x80) == '\0') {
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x50);
      memset((void *)**(undefined8 **)(param_1 + 0x90),0,(long)*(int *)(param_1 + 0xb0) << 2);
      memset(*(void **)(*(long *)(param_1 + 0x90) + 8),0,(long)*(int *)(param_1 + 0xb0) << 2);
      memset(*(void **)(*(long *)(param_1 + 0x90) + 0x10),0,(long)*(int *)(param_1 + 0xb0) << 2);
      memset(*(void **)(*(long *)(param_1 + 0x90) + 0x18),0,(long)*(int *)(param_1 + 0xb0) << 2);
      memset(*(void **)(*(long *)(param_1 + 0x90) + 0x20),0,(long)*(int *)(param_1 + 0xb0) << 2);
      memset(*(void **)(*(long *)(param_1 + 0x90) + 0x28),0,(long)*(int *)(param_1 + 0xb0) << 2);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (*(long **)(param_1 + 200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 200) + 0x30))();
    }
    *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 8) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x74) = 1;
  }
  return cVar1 == '\0';
}

